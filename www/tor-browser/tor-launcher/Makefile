# $OpenBSD: Makefile,v 1.13 2018/09/28 14:54:26 sthen Exp $

ADDON_NAME =		tor-launcher
V =			0.2.16.6
COMMENT =		Tor Browser add-on to manage tor instance
GUID =			tor-launcher@torproject.org
PKGNAME =		${TB_NAME}
ALL_TARGET =		package
USE_GMAKE =		Yes

post-install:
	${INSTALL_DATA_DIR} ${PREFIX}/share/${BROWSER_NAME}
	${SUBST_DATA} ${FILESDIR}/torrc-defaults \
		${PREFIX}/share/${BROWSER_NAME}/torrc-defaults

.include <bsd.port.mk>
