# $OpenBSD: Makefile,v 1.19 2018/11/28 19:29:04 rsadowski Exp $

# Qt5Webkit
USE_WXNEEDED =		Yes

COMMENT =	IDE for C, C++, Python, QML/JavaScript and PHP

VERSION =	5.3.0
DISTNAME =	kdevelop-${VERSION}

HOMEPAGE =	https://www.kdevelop.org/

SHARED_LIBS +=  KDevPlatformDebugger      1.0 # 5.2
SHARED_LIBS +=  KDevPlatformDocumentation 1.0 # 5.2
SHARED_LIBS +=  KDevPlatformInterfaces    1.0 # 5.2
SHARED_LIBS +=  KDevPlatformLanguage      1.0 # 5.2
SHARED_LIBS +=  KDevPlatformOutputView    1.0 # 5.2
SHARED_LIBS +=  KDevPlatformProject       1.0 # 5.2
SHARED_LIBS +=  KDevPlatformSerialization 1.0 # 5.2
SHARED_LIBS +=  KDevPlatformShell         1.0 # 5.2
SHARED_LIBS +=  KDevPlatformSublime       1.0 # 5.2
SHARED_LIBS +=  KDevPlatformTests         1.0 # 5.2
SHARED_LIBS +=  KDevPlatformUtil          1.0 # 5.2
SHARED_LIBS +=  KDevPlatformVcs           1.0 # 5.2

CATEGORIES =	devel x11

# GPLv2+, LGPLv2.1+, GNU FDLv1.2
PERMIT_PACKAGE_CDROM =	Yes

WANTLIB += ${COMPILER_LIBCXX} Grantlee_Templates KF5Archive KF5Attica
WANTLIB += KF5Auth KF5Bookmarks KF5Codecs KF5Completion KF5ConfigCore
WANTLIB += KF5ConfigGui KF5ConfigWidgets KF5CoreAddons KF5Crash
WANTLIB += KF5Declarative KF5GuiAddons KF5I18n KF5IconThemes KF5ItemModels
WANTLIB += KF5ItemViews KF5JobWidgets KF5KCMUtils KF5KIOCore KF5KIOFileWidgets
WANTLIB += KF5KIOWidgets KF5NewStuff KF5NewStuffCore KF5Notifications
WANTLIB += KF5NotifyConfig KF5Package KF5Parts KF5Plasma KF5Purpose
WANTLIB += KF5PurposeWidgets KF5Runner KF5Service KF5Solid KF5SonnetUi
WANTLIB += KF5TextEditor KF5TextWidgets KF5ThreadWeaver KF5WidgetsAddons
WANTLIB += KF5WindowSystem KF5XmlGui Qt5Concurrent Qt5Core Qt5DBus
WANTLIB += Qt5Gui Qt5Help Qt5Network Qt5Qml Qt5Quick Qt5QuickWidgets
WANTLIB += Qt5Sql Qt5Test Qt5WebKit Qt5WebKitWidgets Qt5Widgets
WANTLIB += Qt5Xml apr-1 aprutil-1 c clang kasten3controllers kasten3core
WANTLIB += kasten3gui kasten3okteta1controllers kasten3okteta1core
WANTLIB += kasten3okteta1gui komparediff2 m okteta2core okteta2gui
WANTLIB += svn_client-1 svn_fs-1 svn_ra-1 svn_repos-1 svn_subr-1
WANTLIB += svn_wc-1

MASTER_SITES =	${MASTER_SITE_KDE:=stable/kdevelop/${VERSION}/src/}

MODULES =	devel/kf5 \
		lang/python

BUILD_DEPENDS =	archivers/gtar \
		lang/clazy \
		devel/boost \
		devel/cppcheck \
		devel/gettext-tools \
		misc/shared-mime-info

RUN_DEPENDS =	devel/cmake \
		devel/cppcheck \
		devel/desktop-file-utils \
		devel/gmake \
		lang/clazy \
		misc/shared-mime-info \
		x11/gtk+3,-guic \
		x11/kde-applications/kate \
		x11/kde-applications/kio-extras \
		x11/kde-applications/konsole

LIB_DEPENDS =	devel/kf5/kconfig \
		devel/kf5/karchive \
		devel/kf5/kcmutils \
		devel/kf5/kcrash \
		devel/kf5/kdeclarative \
		devel/kf5/kguiaddons \
		devel/kf5/ki18n \
		devel/kf5/kiconthemes \
		devel/kf5/kio \
		devel/kf5/kitemmodels \
		devel/kf5/kitemviews \
		devel/kf5/kjobwidgets \
		devel/kf5/knewstuff \
		devel/kf5/knotifications \
		devel/kf5/knotifyconfig \
		devel/kf5/kparts \
		devel/kf5/krunner \
		devel/kf5/kservice \
		devel/kf5/ktexteditor \
		devel/kf5/kwindowsystem \
		devel/kf5/kxmlgui \
		devel/kf5/purpose \
		devel/kf5/threadweaver \
		devel/llvm \
		devel/subversion \
		x11/grantlee-qt5 \
		x11/kde-applications/libkomparediff2 \
		x11/kde-applications/okteta \
		x11/qt5/qttools \
		x11/qt5/qtwebkit

CONFIGURE_ARGS+=	-DCMAKE_DISABLE_FIND_PACKAGE_Qt5WebEngineWidgets:BOOL=true

TEST_IS_INTERACTIVE =	X11

pre-configure:
	ln -sf ${LOCALBASE}/bin/gtar ${WRKDIR}/bin/tar

.include <bsd.port.mk>
