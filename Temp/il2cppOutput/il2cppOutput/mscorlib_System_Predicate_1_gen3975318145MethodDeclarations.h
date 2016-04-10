#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Predicate`1<UnityEngine.Experimental.Director.Playable>
struct Predicate_1_t3975318145;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "UnityEngine_UnityEngine_Experimental_Director_Play3404354247.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Predicate`1<UnityEngine.Experimental.Director.Playable>::.ctor(System.Object,System.IntPtr)
extern "C"  void Predicate_1__ctor_m2076512378_gshared (Predicate_1_t3975318145 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m2076512378(__this, ___object, ___method, method) ((  void (*) (Predicate_1_t3975318145 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m2076512378_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.Experimental.Director.Playable>::Invoke(T)
extern "C"  bool Predicate_1_Invoke_m2001748424_gshared (Predicate_1_t3975318145 * __this, Playable_t3404354247  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m2001748424(__this, ___obj, method) ((  bool (*) (Predicate_1_t3975318145 *, Playable_t3404354247 , const MethodInfo*))Predicate_1_Invoke_m2001748424_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.Experimental.Director.Playable>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Predicate_1_BeginInvoke_m3333209431_gshared (Predicate_1_t3975318145 * __this, Playable_t3404354247  ___obj, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m3333209431(__this, ___obj, ___callback, ___object, method) ((  Il2CppObject * (*) (Predicate_1_t3975318145 *, Playable_t3404354247 , AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))Predicate_1_BeginInvoke_m3333209431_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.Experimental.Director.Playable>::EndInvoke(System.IAsyncResult)
extern "C"  bool Predicate_1_EndInvoke_m2254466828_gshared (Predicate_1_t3975318145 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m2254466828(__this, ___result, method) ((  bool (*) (Predicate_1_t3975318145 *, Il2CppObject *, const MethodInfo*))Predicate_1_EndInvoke_m2254466828_gshared)(__this, ___result, method)
