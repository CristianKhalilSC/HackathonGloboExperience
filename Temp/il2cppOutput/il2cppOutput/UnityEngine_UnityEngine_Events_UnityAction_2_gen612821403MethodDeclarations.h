﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>
struct UnityAction_2_t612821403;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "UnityEngine_UnityEngine_SceneManagement_Scene2772977204.h"
#include "UnityEngine_UnityEngine_SceneManagement_LoadSceneM2068802481.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>::.ctor(System.Object,System.IntPtr)
extern "C"  void UnityAction_2__ctor_m3451855966_gshared (UnityAction_2_t612821403 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define UnityAction_2__ctor_m3451855966(__this, ___object, ___method, method) ((  void (*) (UnityAction_2_t612821403 *, Il2CppObject *, IntPtr_t, const MethodInfo*))UnityAction_2__ctor_m3451855966_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>::Invoke(T0,T1)
extern "C"  void UnityAction_2_Invoke_m1664755053_gshared (UnityAction_2_t612821403 * __this, Scene_t2772977204  ___arg0, int32_t ___arg1, const MethodInfo* method);
#define UnityAction_2_Invoke_m1664755053(__this, ___arg0, ___arg1, method) ((  void (*) (UnityAction_2_t612821403 *, Scene_t2772977204 , int32_t, const MethodInfo*))UnityAction_2_Invoke_m1664755053_gshared)(__this, ___arg0, ___arg1, method)
// System.IAsyncResult UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>::BeginInvoke(T0,T1,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * UnityAction_2_BeginInvoke_m3517406036_gshared (UnityAction_2_t612821403 * __this, Scene_t2772977204  ___arg0, int32_t ___arg1, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define UnityAction_2_BeginInvoke_m3517406036(__this, ___arg0, ___arg1, ___callback, ___object, method) ((  Il2CppObject * (*) (UnityAction_2_t612821403 *, Scene_t2772977204 , int32_t, AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))UnityAction_2_BeginInvoke_m3517406036_gshared)(__this, ___arg0, ___arg1, ___callback, ___object, method)
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>::EndInvoke(System.IAsyncResult)
extern "C"  void UnityAction_2_EndInvoke_m2359260526_gshared (UnityAction_2_t612821403 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define UnityAction_2_EndInvoke_m2359260526(__this, ___result, method) ((  void (*) (UnityAction_2_t612821403 *, Il2CppObject *, const MethodInfo*))UnityAction_2_EndInvoke_m2359260526_gshared)(__this, ___result, method)
