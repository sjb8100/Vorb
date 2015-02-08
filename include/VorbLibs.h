///
/// VorbLibs.h
/// Vorb Engine
///
/// Created by Cristian Zaloj on 3 Feb 2015
/// Copyright 2014 Regrowth Studios
/// All Rights Reserved
///
/// Summary:
/// Control library linkage
///

#pragma once

#ifndef VorbLibs_h__
#define VorbLibs_h__

/************************************************************************/
/* Common                                                               */
/************************************************************************/
#pragma message("VORB LIB: Linking Common")
#pragma message("Linking against <opengl32.lib>")
#pragma comment(lib, "opengl32.lib")
#pragma message("Linking against <glew32.lib>")
#pragma comment(lib, "glew32.lib")
#ifdef DEBUG
#pragma message("Linking against <libboost_system-vc120-mt-gd-1_55.lib>")
#pragma comment(lib, "libboost_system-vc120-mt-gd-1_55.lib")
#pragma message("Linking against <libboost_filesystem-vc120-mt-gd-1_55.lib>")
#pragma comment(lib, "libboost_filesystem-vc120-mt-gd-1_55.lib")
#pragma message("Linking against <enet-d.lib>")
#pragma comment(lib, "enet-d.lib")
#pragma message("Linking against <LinearMath-d.lib>")
#pragma comment(lib, "LinearMath-d.lib")
#pragma message("Linking against <BulletCollision-d.lib>")
#pragma comment(lib, "BulletCollision-d.lib")
#pragma message("Linking against <BulletDynamics-d.lib>")
#pragma comment(lib, "BulletDynamics-d.lib")
#pragma message("Linking against <OOLua-d.lib>")
#pragma comment(lib, "OOLua-d.lib")
#pragma message("Linking against <libyaml-cppmdd.lib>")
#pragma comment(lib, "libyaml-cppmdd.lib")
#pragma message("Linking against <ZLIB-d.lib>")
#pragma comment(lib, "ZLIB-d.lib")
#else
#pragma message("Linking against <libboost_system-vc120-mt-1_55.lib>")
#pragma comment(lib, "libboost_system-vc120-mt-1_55.lib")
#pragma message("Linking against <libboost_filesystem-vc120-mt-1_55.lib>")
#pragma comment(lib, "libboost_filesystem-vc120-mt-1_55.lib")
#pragma message("Linking against <enet.lib>")
#pragma comment(lib, "enet.lib")
#pragma message("Linking against <LinearMath.lib>")
#pragma comment(lib, "LinearMath.lib")
#pragma message("Linking against <BulletCollision.lib>")
#pragma comment(lib, "BulletCollision.lib")
#pragma message("Linking against <BulletDynamics.lib>")
#pragma comment(lib, "BulletDynamics.lib")
#pragma message("Linking against <OOLua.lib>")
#pragma comment(lib, "OOLua.lib")
#pragma message("Linking against <libyaml-cppmd.lib>")
#pragma comment(lib, "libyaml-cppmd.lib")
#pragma message("Linking against <ZLIB.lib>")
#pragma comment(lib, "ZLIB.lib")
#endif // DEBUG
#if defined(OS_WINDOWS)
#pragma message("VORB LIB: Linking Windows Common")
#pragma message("Linking against <ws2_32.lib>")
#pragma comment(lib, "ws2_32.lib")
#pragma message("Linking against <winmm.lib>")
#pragma comment(lib, "winmm.lib")
#else
#error TODO(Brian): What is used here?
#endif

/************************************************************************/
/* FreeImage                                                            */
/************************************************************************/
#pragma message("VORB LIB: Linking FreeImage")
#ifdef DEBUG
#pragma message("Linking against <FreeImage-d.lib>")
#pragma comment(lib, "FreeImage-d.lib")
#pragma message("Linking against <libJPEG-d.lib>")
#pragma comment(lib, "libJPEG-d.lib")
#pragma message("Linking against <libJXR-d.lib>")
#pragma comment(lib, "libJXR-d.lib")
#pragma message("Linking against <libPNG-d.lib>")
#pragma comment(lib, "libPNG-d.lib")
#pragma message("Linking against <libRAW-d.lib>")
#pragma comment(lib, "libRAW-d.lib")
#pragma message("Linking against <libTIFF-d.lib>")
#pragma comment(lib, "libTIFF-d.lib")
#pragma message("Linking against <libWebP-d.lib>")
#pragma comment(lib, "libWebP-d.lib")
#pragma message("Linking against <OpenEXR-d.lib>")
#pragma comment(lib, "OpenEXR-d.lib")
#pragma message("Linking against <OpenJPEG-d.lib>")
#pragma comment(lib, "OpenJPEG-d.lib")
#else
#pragma message("Linking against <FreeImage.lib>")
#pragma comment(lib, "FreeImage.lib")
#pragma message("Linking against <libJPEG.lib>")
#pragma comment(lib, "libJPEG.lib")
#pragma message("Linking against <libJXR.lib>")
#pragma comment(lib, "libJXR.lib")
#pragma message("Linking against <libPNG.lib>")
#pragma comment(lib, "libPNG.lib")
#pragma message("Linking against <libRAW.lib>")
#pragma comment(lib, "libRAW.lib")
#pragma message("Linking against <libTIFF.lib>")
#pragma comment(lib, "libTIFF.lib")
#pragma message("Linking against <libWebP.lib>")
#pragma comment(lib, "libWebP.lib")
#pragma message("Linking against <OpenEXR.lib>")
#pragma comment(lib, "OpenEXR.lib")
#pragma message("Linking against <OpenJPEG.lib>")
#pragma comment(lib, "OpenJPEG.lib")
#endif // DEBUG

/************************************************************************/
/* UI                                                                   */
/************************************************************************/
#if defined(VORB_IMPL_UI_GLFW)
#pragma message("VORB LIB: Linking UI=GLFW")
#ifdef DEBUG
#pragma message("Linking against <glfw3-d.lib>")
#pragma comment(lib, "glfw3-d.lib")
#else
#pragma message("Linking against <glfw3.lib>")
#pragma comment(lib, "glfw3.lib")
#endif // DEBUG
#elif defined(VORB_IMPL_UI_SDL)
#pragma message("VORB LIB: Linking UI=SDL")
#pragma message("Linking against <SDL2.lib>")
#pragma comment(lib, "SDL2.lib")
#pragma message("Linking against <SDL2main.lib>")
#pragma comment(lib, "SDL2main.lib")
#elif defined(VORB_IMPL_UI_SFML)
#pragma message("VORB LIB: Linking UI=SFML")
#ifdef DEBUG
#pragma message("Linking against <sfml-system-d.lib>")
#pragma comment(lib, "sfml-system-d.lib")
#pragma message("Linking against <sfml-window-d.lib>")
#pragma comment(lib, "sfml-window-d.lib")
#pragma message("Linking against <sfml-graphics-d.lib>")
#pragma comment(lib, "sfml-graphics-d.lib")
#else
#pragma message("Linking against <sfml-system.lib>")
#pragma comment(lib, "sfml-system.lib")
#pragma message("Linking against <sfml-window.lib>")
#pragma comment(lib, "sfml-window.lib")
#pragma message("Linking against <sfml-graphics.lib>")
#pragma comment(lib, "sfml-graphics.lib")
#endif // DEBUG
#pragma message("Linking against <freetype.lib>")
#pragma comment(lib, "freetype.lib")
#else
#error A UI implementation must be specified
#endif

/************************************************************************/
/* Font                                                                 */
/************************************************************************/
#if defined(VORB_IMPL_FONT_SDL)
#pragma message("VORB LIB: Linking Font=SDL")
#if !defined(VORB_IMPL_UI_SDL)
#pragma message("Linking against <SDL2.lib>")
#pragma comment(lib, "SDL2.lib")
#endif
#pragma message("Linking against <SDL2_ttf.lib>")
#pragma comment(lib, "SDL2_ttf.lib")
#else
#error A Font implementation must be specified
#endif

/************************************************************************/
/* Sound                                                                */
/************************************************************************/
#if defined(VORB_IMPL_SOUND_FMOD)
#pragma message("VORB LIB: Linking Sound=FMOD")
#ifdef DEBUG
#pragma message("Linking against <fmodexL_vc.lib>")
#pragma comment(lib, "fmodexL_vc.lib")
#else
#pragma message("Linking against <fmodex_vc.lib>")
#pragma comment(lib, "fmodex_vc.lib")
#endif // DEBUG
#elif defined(VORB_IMPL_SOUND_SFML)
#pragma message("VORB LIB: Linking Sound=SFML")
#ifdef DEBUG
#pragma message("Linking against <sfml-audio-d.lib>")
#pragma comment(lib, "sfml-audio-d.lib")
#else
#pragma message("Linking against <sfml-audio.lib>")
#pragma comment(lib, "sfml-audio.lib")
#endif // DEBUG
#pragma message("Linking against <openal32.lib>")
#pragma comment(lib, "openal32.lib")
#pragma message("Linking against <sndfile.lib>")
#pragma comment(lib, "sndfile.lib")
#else
#error A sound implementation must be specified
#endif

#endif // VorbLibs_h__
