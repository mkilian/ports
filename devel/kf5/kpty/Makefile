# $OpenBSD: Makefile,v 1.8 2018/10/22 20:30:43 rsadowski Exp $

COMMENT =		interfacing with pseudo terminal devices in KDE
DISTNAME =		kpty-${VERSION}

SHARED_LIBS =		KF5Pty		4.2

WANTLIB += ${COMPILER_LIBCXX} KF5CoreAddons KF5I18n Qt5Core m
WANTLIB += util

BUILD_DEPENDS =		devel/gettext-tools

LIB_DEPENDS =		devel/kf5/kcoreaddons \
			devel/kf5/ki18n

CONFIGURE_ARGS =	-DCMAKE_DISABLE_FIND_PACKAGE_UTEMPTER=Yes

# TODO test stalls

.include <bsd.port.mk>
