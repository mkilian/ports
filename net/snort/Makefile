# $OpenBSD: Makefile,v 1.101 2019/02/12 22:19:52 sthen Exp $

COMMENT =		highly flexible sniffer/NIDS

DISTNAME =		snort-2.9.12
RULESV =		29120
SUBST_VARS =		RULESV

CATEGORIES =		net security

HOMEPAGE =		https://www.snort.org/

MAINTAINER =		Markus Lude <markus.lude@gmx.de>

# GPLv2
PERMIT_PACKAGE_CDROM =	Yes

WANTLIB =		c crypto daq dnet luajit-5.1 lzma m nghttp2 pcap pcre pthread z

MASTER_SITES =		https://www.snort.org/downloads/snort/

SEPARATE_BUILD =	Yes
CONFIGURE_STYLE =	gnu
CONFIGURE_ARGS +=	--disable-static-daq \
			--enable-non-ether-decoders

LIB_DEPENDS =		archivers/xz \
			devel/pcre \
			lang/luajit \
			net/daq \
			net/libdnet \
			www/nghttp2

CONFIGS	=		classification.config gen-msg.map reference.config \
			snort.conf threshold.conf unicode.map

PREPROC =		decoder.rules preprocessor.rules

DOCS =			AUTHORS CREDITS README README.* *.pdf TODO USAGE \
			WISHLIST

pre-configure:
	@cd ${WRKSRC}; ${SUBST_CMD} etc/snort.conf tools/appid_detector_builder.sh

post-install:
	${INSTALL_DATA_DIR} ${PREFIX}/share/examples/snort
.for i in ${CONFIGS}
	${INSTALL_DATA} ${WRKSRC}/etc/${i} ${PREFIX}/share/examples/snort
.endfor
	${INSTALL_DATA} ${WRKSRC}/doc/generators ${PREFIX}/share/examples/snort

.for i in ${PREPROC}
	${INSTALL_DATA} ${WRKSRC}/preproc_rules/${i} ${PREFIX}/share/examples/snort
.endfor

	${INSTALL_DATA_DIR} ${PREFIX}/share/doc/snort
.for i in ${DOCS}
	${INSTALL_DATA} ${WRKSRC}/doc/${i} ${PREFIX}/share/doc/snort
.endfor

NO_TEST =		Yes

.include <bsd.port.mk>
