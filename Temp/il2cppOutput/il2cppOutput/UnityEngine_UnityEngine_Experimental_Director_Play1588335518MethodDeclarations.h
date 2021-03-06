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

// System.Object
struct Il2CppObject;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "UnityEngine_UnityEngine_Experimental_Director_Play3404354247.h"
#include "UnityEngine_UnityEngine_Experimental_Director_Play1575932342.h"
#include "mscorlib_System_Object837106420.h"

// System.Object UnityEngine.Experimental.Director.Playables::CastToInternal(System.Type,System.IntPtr,System.Int32)
extern "C"  Il2CppObject * Playables_CastToInternal_m3521890406 (Il2CppObject * __this /* static, unused */, Type_t * ___castType, IntPtr_t ___handle, int32_t ___version, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.Playables::InternalDestroy(UnityEngine.Experimental.Director.Playable&)
extern "C"  void Playables_InternalDestroy_m3949572482 (Il2CppObject * __this /* static, unused */, Playable_t3404354247 * ___playable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.Playables::INTERNAL_CALL_InternalDestroy(UnityEngine.Experimental.Director.Playable&)
extern "C"  void Playables_INTERNAL_CALL_InternalDestroy_m1453669761 (Il2CppObject * __this /* static, unused */, Playable_t3404354247 * ___playable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Experimental.Director.Playables::ConnectInternal(UnityEngine.Experimental.Director.Playable&,UnityEngine.Experimental.Director.Playable&,System.Int32,System.Int32)
extern "C"  bool Playables_ConnectInternal_m267734425 (Il2CppObject * __this /* static, unused */, Playable_t3404354247 * ___source, Playable_t3404354247 * ___target, int32_t ___sourceOutputPort, int32_t ___targetInputPort, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Experimental.Director.Playables::INTERNAL_CALL_ConnectInternal(UnityEngine.Experimental.Director.Playable&,UnityEngine.Experimental.Director.Playable&,System.Int32,System.Int32)
extern "C"  bool Playables_INTERNAL_CALL_ConnectInternal_m524648664 (Il2CppObject * __this /* static, unused */, Playable_t3404354247 * ___source, Playable_t3404354247 * ___target, int32_t ___sourceOutputPort, int32_t ___targetInputPort, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.Playables::DisconnectInternal(UnityEngine.Experimental.Director.Playable&,System.Int32)
extern "C"  void Playables_DisconnectInternal_m4214943703 (Il2CppObject * __this /* static, unused */, Playable_t3404354247 * ___target, int32_t ___inputPort, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.Playables::INTERNAL_CALL_DisconnectInternal(UnityEngine.Experimental.Director.Playable&,System.Int32)
extern "C"  void Playables_INTERNAL_CALL_DisconnectInternal_m624205270 (Il2CppObject * __this /* static, unused */, Playable_t3404354247 * ___target, int32_t ___inputPort, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Experimental.Director.Playables::CheckInputBounds(UnityEngine.Experimental.Director.Playable,System.Int32)
extern "C"  bool Playables_CheckInputBounds_m2114632179 (Il2CppObject * __this /* static, unused */, Playable_t3404354247  ___playable, int32_t ___inputIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Experimental.Director.Playables::IsValid(UnityEngine.Experimental.Director.Playable)
extern "C"  bool Playables_IsValid_m2470091365 (Il2CppObject * __this /* static, unused */, Playable_t3404354247  ___playable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Experimental.Director.Playables::GetInputCountValidated(UnityEngine.Experimental.Director.Playable,System.Type)
extern "C"  int32_t Playables_GetInputCountValidated_m1590651641 (Il2CppObject * __this /* static, unused */, Playable_t3404354247  ___playable, Type_t * ___typeofPlayable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Experimental.Director.Playables::GetOutputCountValidated(UnityEngine.Experimental.Director.Playable,System.Type)
extern "C"  int32_t Playables_GetOutputCountValidated_m708466518 (Il2CppObject * __this /* static, unused */, Playable_t3404354247  ___playable, Type_t * ___typeofPlayable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Experimental.Director.PlayState UnityEngine.Experimental.Director.Playables::GetPlayStateValidated(UnityEngine.Experimental.Director.Playable,System.Type)
extern "C"  int32_t Playables_GetPlayStateValidated_m1788069712 (Il2CppObject * __this /* static, unused */, Playable_t3404354247  ___playable, Type_t * ___typeofPlayable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.Playables::SetPlayStateValidated(UnityEngine.Experimental.Director.Playable,UnityEngine.Experimental.Director.PlayState,System.Type)
extern "C"  void Playables_SetPlayStateValidated_m2009824181 (Il2CppObject * __this /* static, unused */, Playable_t3404354247  ___playable, int32_t ___playState, Type_t * ___typeofPlayable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double UnityEngine.Experimental.Director.Playables::GetTimeValidated(UnityEngine.Experimental.Director.Playable,System.Type)
extern "C"  double Playables_GetTimeValidated_m2484996622 (Il2CppObject * __this /* static, unused */, Playable_t3404354247  ___playable, Type_t * ___typeofPlayable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.Playables::SetTimeValidated(UnityEngine.Experimental.Director.Playable,System.Double,System.Type)
extern "C"  void Playables_SetTimeValidated_m778916929 (Il2CppObject * __this /* static, unused */, Playable_t3404354247  ___playable, double ___time, Type_t * ___typeofPlayable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double UnityEngine.Experimental.Director.Playables::GetDurationValidated(UnityEngine.Experimental.Director.Playable,System.Type)
extern "C"  double Playables_GetDurationValidated_m2822701863 (Il2CppObject * __this /* static, unused */, Playable_t3404354247  ___playable, Type_t * ___typeofPlayable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.Playables::SetDurationValidated(UnityEngine.Experimental.Director.Playable,System.Double,System.Type)
extern "C"  void Playables_SetDurationValidated_m2881460762 (Il2CppObject * __this /* static, unused */, Playable_t3404354247  ___playable, double ___duration, Type_t * ___typeofPlayable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Experimental.Director.Playable UnityEngine.Experimental.Director.Playables::GetInputValidated(UnityEngine.Experimental.Director.Playable,System.Int32,System.Type)
extern "C"  Playable_t3404354247  Playables_GetInputValidated_m176010709 (Il2CppObject * __this /* static, unused */, Playable_t3404354247  ___playable, int32_t ___inputPort, Type_t * ___typeofPlayable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Experimental.Director.Playable UnityEngine.Experimental.Director.Playables::GetOutputValidated(UnityEngine.Experimental.Director.Playable,System.Int32,System.Type)
extern "C"  Playable_t3404354247  Playables_GetOutputValidated_m70115406 (Il2CppObject * __this /* static, unused */, Playable_t3404354247  ___playable, int32_t ___outputPort, Type_t * ___typeofPlayable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.Playables::SetInputWeightValidated(UnityEngine.Experimental.Director.Playable,System.Int32,System.Single,System.Type)
extern "C"  void Playables_SetInputWeightValidated_m799805684 (Il2CppObject * __this /* static, unused */, Playable_t3404354247  ___playable, int32_t ___inputIndex, float ___weight, Type_t * ___typeofPlayable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Experimental.Director.Playables::GetInputWeightValidated(UnityEngine.Experimental.Director.Playable,System.Int32,System.Type)
extern "C"  float Playables_GetInputWeightValidated_m870617231 (Il2CppObject * __this /* static, unused */, Playable_t3404354247  ___playable, int32_t ___index, Type_t * ___typeofPlayable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Experimental.Director.Playables::Equals(UnityEngine.Experimental.Director.Playable,System.Object)
extern "C"  bool Playables_Equals_m2773836346 (Il2CppObject * __this /* static, unused */, Playable_t3404354247  ___isAPlayable, Il2CppObject * ___mightBeAnythingOrNull, const MethodInfo* method) IL2CPP_METHOD_ATTR;
