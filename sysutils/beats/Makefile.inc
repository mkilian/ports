# $OpenBSD: Makefile.inc,v 1.9 2018/05/17 12:47:32 pvk Exp $

PKGNAME ?=		${BEAT}-${VERSION}

CATEGORIES +=		sysutils

MAINTAINER ?=		Jasper Lievisse Adriaanse <jasper@openbsd.org>

# Apachev2
PERMIT_PACKAGE_CDROM ?=	Yes

MODULES +=	     	lang/go

ELASTIC_BEAT ?=	     	Yes

MODGO_ENV =		PATH="${PORTPATH}" CFLAGS="${CFLAGS}"

.if ${ELASTIC_BEAT:L} == "yes"
HOMEPAGE ?=		https://www.elastic.co/products/beats/${BEAT}

ALL_TARGET =		github.com/elastic/beats/${BEAT}

WRKDIST =		${WRKDIR}/${GH_PROJECT}-${VERSION}
MODGO_SUBDIR =		${WRKDIST}/${BEAT}

pre-build:
	cp -r ${WRKDIST}/{libbeat,vendor} ${WRKSRC}/../
	if [ -d ${WRKDIST}/metricbeat ]; then \
		cp -R ${WRKDIST}/metricbeat/ ${WRKSRC}/../; \
	fi
.else
ALL_TARGET ?=		github.com/${GH_ACCOUNT}/${BEAT}
.endif

# XXX: requires -path.home ${PREFIX}/share/${BEAT}/module/
BEATS_MODULES ?=	No

post-install:
	${INSTALL_DATA_DIR} ${PREFIX}/share/examples/${BEAT}/
.for c in ${CONFIGS}
	cp ${WRKSRC}/$c ${PREFIX}/share/examples/${BEAT}/
.endfor
	${INSTALL_DATA_DIR} ${PREFIX}/share/${BEAT}/
.if defined(BEATS_MODULES) && ${BEATS_MODULES:L} == "yes"
	${INSTALL_DATA_DIR} ${PREFIX}/share/${BEAT}/module/
	cd ${WRKSRC}/module && \
		find . -type f -name \*.yml -o -name \*.json -a \! -name \*expected\.json | \
		grep -v _meta | pax -rw ${PREFIX}/share/${BEAT}/module/
.endif
