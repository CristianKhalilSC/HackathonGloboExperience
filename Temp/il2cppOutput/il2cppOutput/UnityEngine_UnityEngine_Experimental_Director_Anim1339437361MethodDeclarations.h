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

// System.Type
struct Type_t;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Experimental.Director.Playable>
struct IEnumerable_1_t1981541307;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Experimental_Director_Anim3361204779.h"
#include "UnityEngine_UnityEngine_Experimental_Director_Play3404354247.h"
#include "mscorlib_System_Type2779229935.h"

// System.Int32 UnityEngine.Experimental.Director.AnimationPlayableUtilities::AddInputValidated(UnityEngine.Experimental.Director.AnimationPlayable,UnityEngine.Experimental.Director.Playable,System.Type)
extern "C"  int32_t AnimationPlayableUtilities_AddInputValidated_m580261089 (Il2CppObject * __this /* static, unused */, AnimationPlayable_t3361204779  ___target, Playable_t3404354247  ___input, Type_t * ___typeofTarget, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Experimental.Director.AnimationPlayableUtilities::SetInputValidated(UnityEngine.Experimental.Director.AnimationPlayable,UnityEngine.Experimental.Director.Playable,System.Int32,System.Type)
extern "C"  bool AnimationPlayableUtilities_SetInputValidated_m2322495521 (Il2CppObject * __this /* static, unused */, AnimationPlayable_t3361204779  ___target, Playable_t3404354247  ___source, int32_t ___index, Type_t * ___typeofTarget, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Experimental.Director.AnimationPlayableUtilities::SetInputsValidated(UnityEngine.Experimental.Director.AnimationPlayable,System.Collections.Generic.IEnumerable`1<UnityEngine.Experimental.Director.Playable>,System.Type)
extern "C"  bool AnimationPlayableUtilities_SetInputsValidated_m1364271782 (Il2CppObject * __this /* static, unused */, AnimationPlayable_t3361204779  ___target, Il2CppObject* ___sources, Type_t * ___typeofTarget, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Experimental.Director.AnimationPlayableUtilities::RemoveInputValidated(UnityEngine.Experimental.Director.AnimationPlayable,System.Int32,System.Type)
extern "C"  bool AnimationPlayableUtilities_RemoveInputValidated_m1233499216 (Il2CppObject * __this /* static, unused */, AnimationPlayable_t3361204779  ___target, int32_t ___index, Type_t * ___typeofTarget, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Experimental.Director.AnimationPlayableUtilities::RemoveAllInputsValidated(UnityEngine.Experimental.Director.AnimationPlayable,System.Type)
extern "C"  bool AnimationPlayableUtilities_RemoveAllInputsValidated_m870139853 (Il2CppObject * __this /* static, unused */, AnimationPlayable_t3361204779  ___target, Type_t * ___typeofTarget, const MethodInfo* method) IL2CPP_METHOD_ATTR;
