// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/SoundAtomCue.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundAtomCue() {}
// Cross Module References
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_USoundAtomCue_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_USoundAtomCue();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomCueInfo();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_USoundAtomCueSheet_NoRegister();
	CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_EAtomLoopSetting();
	ENGINE_API UClass* Z_Construct_UClass_USoundAttenuation_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtom3dRegion_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USoundAtomCue::execBP_GetCueInfo)
	{
		P_GET_STRUCT_REF(FAtomCueInfo,Z_Param_Out_CueInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->BP_GetCueInfo(Z_Param_Out_CueInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USoundAtomCue::execGetCullDistance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCullDistance();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USoundAtomCue::execGetCullDistanceMarginToApply)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCullDistanceMarginToApply();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USoundAtomCue::execGetCullingBoundaryDistanceToUse)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCullingBoundaryDistanceToUse();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USoundAtomCue::execGetCullingMarginDistanceToUse)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCullingMarginDistanceToUse();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USoundAtomCue::execGetEconomicTickBoundaryDistanceToUse)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetEconomicTickBoundaryDistanceToUse();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USoundAtomCue::execGetEconomicTickDistance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetEconomicTickDistance();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USoundAtomCue::execGetEconomicTickDistanceMarginToApply)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetEconomicTickDistanceMarginToApply();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USoundAtomCue::execGetEconomicTickFrequencyToApply)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetEconomicTickFrequencyToApply();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USoundAtomCue::execGetEconomicTickFrequencyToUse)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetEconomicTickFrequencyToUse();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USoundAtomCue::execGetEconomicTickMarginDistanceToUse)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetEconomicTickMarginDistanceToUse();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USoundAtomCue::execGetMaxAttenuationDistanceToApply)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMaxAttenuationDistanceToApply();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USoundAtomCue::execGetMaxAttenuationDistanceToUse)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMaxAttenuationDistanceToUse();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USoundAtomCue::execIsEconomicTickEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsEconomicTickEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USoundAtomCue::execIsLooping)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsLooping();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USoundAtomCue::execValidate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Validate();
		P_NATIVE_END;
	}
	void USoundAtomCue::StaticRegisterNativesUSoundAtomCue()
	{
		UClass* Class = USoundAtomCue::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BP_GetCueInfo", &USoundAtomCue::execBP_GetCueInfo },
			{ "GetCullDistance", &USoundAtomCue::execGetCullDistance },
			{ "GetCullDistanceMarginToApply", &USoundAtomCue::execGetCullDistanceMarginToApply },
			{ "GetCullingBoundaryDistanceToUse", &USoundAtomCue::execGetCullingBoundaryDistanceToUse },
			{ "GetCullingMarginDistanceToUse", &USoundAtomCue::execGetCullingMarginDistanceToUse },
			{ "GetEconomicTickBoundaryDistanceToUse", &USoundAtomCue::execGetEconomicTickBoundaryDistanceToUse },
			{ "GetEconomicTickDistance", &USoundAtomCue::execGetEconomicTickDistance },
			{ "GetEconomicTickDistanceMarginToApply", &USoundAtomCue::execGetEconomicTickDistanceMarginToApply },
			{ "GetEconomicTickFrequencyToApply", &USoundAtomCue::execGetEconomicTickFrequencyToApply },
			{ "GetEconomicTickFrequencyToUse", &USoundAtomCue::execGetEconomicTickFrequencyToUse },
			{ "GetEconomicTickMarginDistanceToUse", &USoundAtomCue::execGetEconomicTickMarginDistanceToUse },
			{ "GetMaxAttenuationDistanceToApply", &USoundAtomCue::execGetMaxAttenuationDistanceToApply },
			{ "GetMaxAttenuationDistanceToUse", &USoundAtomCue::execGetMaxAttenuationDistanceToUse },
			{ "IsEconomicTickEnabled", &USoundAtomCue::execIsEconomicTickEnabled },
			{ "IsLooping", &USoundAtomCue::execIsLooping },
			{ "Validate", &USoundAtomCue::execValidate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USoundAtomCue_BP_GetCueInfo_Statics
	{
		struct SoundAtomCue_eventBP_GetCueInfo_Parms
		{
			FAtomCueInfo CueInfo;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CueInfo;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USoundAtomCue_BP_GetCueInfo_Statics::NewProp_CueInfo = { "CueInfo", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SoundAtomCue_eventBP_GetCueInfo_Parms, CueInfo), Z_Construct_UScriptStruct_FAtomCueInfo, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USoundAtomCue_BP_GetCueInfo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SoundAtomCue_eventBP_GetCueInfo_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USoundAtomCue_BP_GetCueInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SoundAtomCue_eventBP_GetCueInfo_Parms), &Z_Construct_UFunction_USoundAtomCue_BP_GetCueInfo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundAtomCue_BP_GetCueInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCue_BP_GetCueInfo_Statics::NewProp_CueInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCue_BP_GetCueInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundAtomCue_BP_GetCueInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SoundAtomCue.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundAtomCue_BP_GetCueInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundAtomCue, nullptr, "BP_GetCueInfo", nullptr, nullptr, sizeof(SoundAtomCue_eventBP_GetCueInfo_Parms), Z_Construct_UFunction_USoundAtomCue_BP_GetCueInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCue_BP_GetCueInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USoundAtomCue_BP_GetCueInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCue_BP_GetCueInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USoundAtomCue_BP_GetCueInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USoundAtomCue_BP_GetCueInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USoundAtomCue_GetCullDistance_Statics
	{
		struct SoundAtomCue_eventGetCullDistance_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USoundAtomCue_GetCullDistance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SoundAtomCue_eventGetCullDistance_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundAtomCue_GetCullDistance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCue_GetCullDistance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundAtomCue_GetCullDistance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SoundAtomCue.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundAtomCue_GetCullDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundAtomCue, nullptr, "GetCullDistance", nullptr, nullptr, sizeof(SoundAtomCue_eventGetCullDistance_Parms), Z_Construct_UFunction_USoundAtomCue_GetCullDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCue_GetCullDistance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USoundAtomCue_GetCullDistance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCue_GetCullDistance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USoundAtomCue_GetCullDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USoundAtomCue_GetCullDistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USoundAtomCue_GetCullDistanceMarginToApply_Statics
	{
		struct SoundAtomCue_eventGetCullDistanceMarginToApply_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USoundAtomCue_GetCullDistanceMarginToApply_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SoundAtomCue_eventGetCullDistanceMarginToApply_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundAtomCue_GetCullDistanceMarginToApply_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCue_GetCullDistanceMarginToApply_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundAtomCue_GetCullDistanceMarginToApply_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SoundAtomCue.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundAtomCue_GetCullDistanceMarginToApply_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundAtomCue, nullptr, "GetCullDistanceMarginToApply", nullptr, nullptr, sizeof(SoundAtomCue_eventGetCullDistanceMarginToApply_Parms), Z_Construct_UFunction_USoundAtomCue_GetCullDistanceMarginToApply_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCue_GetCullDistanceMarginToApply_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USoundAtomCue_GetCullDistanceMarginToApply_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCue_GetCullDistanceMarginToApply_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USoundAtomCue_GetCullDistanceMarginToApply()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USoundAtomCue_GetCullDistanceMarginToApply_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USoundAtomCue_GetCullingBoundaryDistanceToUse_Statics
	{
		struct SoundAtomCue_eventGetCullingBoundaryDistanceToUse_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USoundAtomCue_GetCullingBoundaryDistanceToUse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SoundAtomCue_eventGetCullingBoundaryDistanceToUse_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundAtomCue_GetCullingBoundaryDistanceToUse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCue_GetCullingBoundaryDistanceToUse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundAtomCue_GetCullingBoundaryDistanceToUse_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SoundAtomCue.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundAtomCue_GetCullingBoundaryDistanceToUse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundAtomCue, nullptr, "GetCullingBoundaryDistanceToUse", nullptr, nullptr, sizeof(SoundAtomCue_eventGetCullingBoundaryDistanceToUse_Parms), Z_Construct_UFunction_USoundAtomCue_GetCullingBoundaryDistanceToUse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCue_GetCullingBoundaryDistanceToUse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USoundAtomCue_GetCullingBoundaryDistanceToUse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCue_GetCullingBoundaryDistanceToUse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USoundAtomCue_GetCullingBoundaryDistanceToUse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USoundAtomCue_GetCullingBoundaryDistanceToUse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USoundAtomCue_GetCullingMarginDistanceToUse_Statics
	{
		struct SoundAtomCue_eventGetCullingMarginDistanceToUse_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USoundAtomCue_GetCullingMarginDistanceToUse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SoundAtomCue_eventGetCullingMarginDistanceToUse_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundAtomCue_GetCullingMarginDistanceToUse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCue_GetCullingMarginDistanceToUse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundAtomCue_GetCullingMarginDistanceToUse_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SoundAtomCue.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundAtomCue_GetCullingMarginDistanceToUse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundAtomCue, nullptr, "GetCullingMarginDistanceToUse", nullptr, nullptr, sizeof(SoundAtomCue_eventGetCullingMarginDistanceToUse_Parms), Z_Construct_UFunction_USoundAtomCue_GetCullingMarginDistanceToUse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCue_GetCullingMarginDistanceToUse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USoundAtomCue_GetCullingMarginDistanceToUse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCue_GetCullingMarginDistanceToUse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USoundAtomCue_GetCullingMarginDistanceToUse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USoundAtomCue_GetCullingMarginDistanceToUse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USoundAtomCue_GetEconomicTickBoundaryDistanceToUse_Statics
	{
		struct SoundAtomCue_eventGetEconomicTickBoundaryDistanceToUse_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USoundAtomCue_GetEconomicTickBoundaryDistanceToUse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SoundAtomCue_eventGetEconomicTickBoundaryDistanceToUse_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundAtomCue_GetEconomicTickBoundaryDistanceToUse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCue_GetEconomicTickBoundaryDistanceToUse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundAtomCue_GetEconomicTickBoundaryDistanceToUse_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SoundAtomCue.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundAtomCue_GetEconomicTickBoundaryDistanceToUse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundAtomCue, nullptr, "GetEconomicTickBoundaryDistanceToUse", nullptr, nullptr, sizeof(SoundAtomCue_eventGetEconomicTickBoundaryDistanceToUse_Parms), Z_Construct_UFunction_USoundAtomCue_GetEconomicTickBoundaryDistanceToUse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCue_GetEconomicTickBoundaryDistanceToUse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USoundAtomCue_GetEconomicTickBoundaryDistanceToUse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCue_GetEconomicTickBoundaryDistanceToUse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USoundAtomCue_GetEconomicTickBoundaryDistanceToUse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USoundAtomCue_GetEconomicTickBoundaryDistanceToUse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USoundAtomCue_GetEconomicTickDistance_Statics
	{
		struct SoundAtomCue_eventGetEconomicTickDistance_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USoundAtomCue_GetEconomicTickDistance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SoundAtomCue_eventGetEconomicTickDistance_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundAtomCue_GetEconomicTickDistance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCue_GetEconomicTickDistance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundAtomCue_GetEconomicTickDistance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SoundAtomCue.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundAtomCue_GetEconomicTickDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundAtomCue, nullptr, "GetEconomicTickDistance", nullptr, nullptr, sizeof(SoundAtomCue_eventGetEconomicTickDistance_Parms), Z_Construct_UFunction_USoundAtomCue_GetEconomicTickDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCue_GetEconomicTickDistance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USoundAtomCue_GetEconomicTickDistance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCue_GetEconomicTickDistance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USoundAtomCue_GetEconomicTickDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USoundAtomCue_GetEconomicTickDistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USoundAtomCue_GetEconomicTickDistanceMarginToApply_Statics
	{
		struct SoundAtomCue_eventGetEconomicTickDistanceMarginToApply_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USoundAtomCue_GetEconomicTickDistanceMarginToApply_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SoundAtomCue_eventGetEconomicTickDistanceMarginToApply_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundAtomCue_GetEconomicTickDistanceMarginToApply_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCue_GetEconomicTickDistanceMarginToApply_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundAtomCue_GetEconomicTickDistanceMarginToApply_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SoundAtomCue.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundAtomCue_GetEconomicTickDistanceMarginToApply_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundAtomCue, nullptr, "GetEconomicTickDistanceMarginToApply", nullptr, nullptr, sizeof(SoundAtomCue_eventGetEconomicTickDistanceMarginToApply_Parms), Z_Construct_UFunction_USoundAtomCue_GetEconomicTickDistanceMarginToApply_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCue_GetEconomicTickDistanceMarginToApply_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USoundAtomCue_GetEconomicTickDistanceMarginToApply_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCue_GetEconomicTickDistanceMarginToApply_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USoundAtomCue_GetEconomicTickDistanceMarginToApply()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USoundAtomCue_GetEconomicTickDistanceMarginToApply_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USoundAtomCue_GetEconomicTickFrequencyToApply_Statics
	{
		struct SoundAtomCue_eventGetEconomicTickFrequencyToApply_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USoundAtomCue_GetEconomicTickFrequencyToApply_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SoundAtomCue_eventGetEconomicTickFrequencyToApply_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundAtomCue_GetEconomicTickFrequencyToApply_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCue_GetEconomicTickFrequencyToApply_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundAtomCue_GetEconomicTickFrequencyToApply_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SoundAtomCue.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundAtomCue_GetEconomicTickFrequencyToApply_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundAtomCue, nullptr, "GetEconomicTickFrequencyToApply", nullptr, nullptr, sizeof(SoundAtomCue_eventGetEconomicTickFrequencyToApply_Parms), Z_Construct_UFunction_USoundAtomCue_GetEconomicTickFrequencyToApply_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCue_GetEconomicTickFrequencyToApply_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USoundAtomCue_GetEconomicTickFrequencyToApply_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCue_GetEconomicTickFrequencyToApply_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USoundAtomCue_GetEconomicTickFrequencyToApply()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USoundAtomCue_GetEconomicTickFrequencyToApply_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USoundAtomCue_GetEconomicTickFrequencyToUse_Statics
	{
		struct SoundAtomCue_eventGetEconomicTickFrequencyToUse_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USoundAtomCue_GetEconomicTickFrequencyToUse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SoundAtomCue_eventGetEconomicTickFrequencyToUse_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundAtomCue_GetEconomicTickFrequencyToUse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCue_GetEconomicTickFrequencyToUse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundAtomCue_GetEconomicTickFrequencyToUse_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SoundAtomCue.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundAtomCue_GetEconomicTickFrequencyToUse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundAtomCue, nullptr, "GetEconomicTickFrequencyToUse", nullptr, nullptr, sizeof(SoundAtomCue_eventGetEconomicTickFrequencyToUse_Parms), Z_Construct_UFunction_USoundAtomCue_GetEconomicTickFrequencyToUse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCue_GetEconomicTickFrequencyToUse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USoundAtomCue_GetEconomicTickFrequencyToUse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCue_GetEconomicTickFrequencyToUse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USoundAtomCue_GetEconomicTickFrequencyToUse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USoundAtomCue_GetEconomicTickFrequencyToUse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USoundAtomCue_GetEconomicTickMarginDistanceToUse_Statics
	{
		struct SoundAtomCue_eventGetEconomicTickMarginDistanceToUse_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USoundAtomCue_GetEconomicTickMarginDistanceToUse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SoundAtomCue_eventGetEconomicTickMarginDistanceToUse_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundAtomCue_GetEconomicTickMarginDistanceToUse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCue_GetEconomicTickMarginDistanceToUse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundAtomCue_GetEconomicTickMarginDistanceToUse_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SoundAtomCue.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundAtomCue_GetEconomicTickMarginDistanceToUse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundAtomCue, nullptr, "GetEconomicTickMarginDistanceToUse", nullptr, nullptr, sizeof(SoundAtomCue_eventGetEconomicTickMarginDistanceToUse_Parms), Z_Construct_UFunction_USoundAtomCue_GetEconomicTickMarginDistanceToUse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCue_GetEconomicTickMarginDistanceToUse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USoundAtomCue_GetEconomicTickMarginDistanceToUse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCue_GetEconomicTickMarginDistanceToUse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USoundAtomCue_GetEconomicTickMarginDistanceToUse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USoundAtomCue_GetEconomicTickMarginDistanceToUse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USoundAtomCue_GetMaxAttenuationDistanceToApply_Statics
	{
		struct SoundAtomCue_eventGetMaxAttenuationDistanceToApply_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USoundAtomCue_GetMaxAttenuationDistanceToApply_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SoundAtomCue_eventGetMaxAttenuationDistanceToApply_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundAtomCue_GetMaxAttenuationDistanceToApply_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCue_GetMaxAttenuationDistanceToApply_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundAtomCue_GetMaxAttenuationDistanceToApply_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SoundAtomCue.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundAtomCue_GetMaxAttenuationDistanceToApply_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundAtomCue, nullptr, "GetMaxAttenuationDistanceToApply", nullptr, nullptr, sizeof(SoundAtomCue_eventGetMaxAttenuationDistanceToApply_Parms), Z_Construct_UFunction_USoundAtomCue_GetMaxAttenuationDistanceToApply_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCue_GetMaxAttenuationDistanceToApply_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USoundAtomCue_GetMaxAttenuationDistanceToApply_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCue_GetMaxAttenuationDistanceToApply_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USoundAtomCue_GetMaxAttenuationDistanceToApply()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USoundAtomCue_GetMaxAttenuationDistanceToApply_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USoundAtomCue_GetMaxAttenuationDistanceToUse_Statics
	{
		struct SoundAtomCue_eventGetMaxAttenuationDistanceToUse_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USoundAtomCue_GetMaxAttenuationDistanceToUse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SoundAtomCue_eventGetMaxAttenuationDistanceToUse_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundAtomCue_GetMaxAttenuationDistanceToUse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCue_GetMaxAttenuationDistanceToUse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundAtomCue_GetMaxAttenuationDistanceToUse_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SoundAtomCue.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundAtomCue_GetMaxAttenuationDistanceToUse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundAtomCue, nullptr, "GetMaxAttenuationDistanceToUse", nullptr, nullptr, sizeof(SoundAtomCue_eventGetMaxAttenuationDistanceToUse_Parms), Z_Construct_UFunction_USoundAtomCue_GetMaxAttenuationDistanceToUse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCue_GetMaxAttenuationDistanceToUse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USoundAtomCue_GetMaxAttenuationDistanceToUse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCue_GetMaxAttenuationDistanceToUse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USoundAtomCue_GetMaxAttenuationDistanceToUse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USoundAtomCue_GetMaxAttenuationDistanceToUse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USoundAtomCue_IsEconomicTickEnabled_Statics
	{
		struct SoundAtomCue_eventIsEconomicTickEnabled_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USoundAtomCue_IsEconomicTickEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SoundAtomCue_eventIsEconomicTickEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USoundAtomCue_IsEconomicTickEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SoundAtomCue_eventIsEconomicTickEnabled_Parms), &Z_Construct_UFunction_USoundAtomCue_IsEconomicTickEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundAtomCue_IsEconomicTickEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCue_IsEconomicTickEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundAtomCue_IsEconomicTickEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SoundAtomCue.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundAtomCue_IsEconomicTickEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundAtomCue, nullptr, "IsEconomicTickEnabled", nullptr, nullptr, sizeof(SoundAtomCue_eventIsEconomicTickEnabled_Parms), Z_Construct_UFunction_USoundAtomCue_IsEconomicTickEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCue_IsEconomicTickEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USoundAtomCue_IsEconomicTickEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCue_IsEconomicTickEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USoundAtomCue_IsEconomicTickEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USoundAtomCue_IsEconomicTickEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USoundAtomCue_IsLooping_Statics
	{
		struct SoundAtomCue_eventIsLooping_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USoundAtomCue_IsLooping_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SoundAtomCue_eventIsLooping_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USoundAtomCue_IsLooping_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SoundAtomCue_eventIsLooping_Parms), &Z_Construct_UFunction_USoundAtomCue_IsLooping_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundAtomCue_IsLooping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCue_IsLooping_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundAtomCue_IsLooping_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SoundAtomCue.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundAtomCue_IsLooping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundAtomCue, nullptr, "IsLooping", nullptr, nullptr, sizeof(SoundAtomCue_eventIsLooping_Parms), Z_Construct_UFunction_USoundAtomCue_IsLooping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCue_IsLooping_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USoundAtomCue_IsLooping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCue_IsLooping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USoundAtomCue_IsLooping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USoundAtomCue_IsLooping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USoundAtomCue_Validate_Statics
	{
		struct SoundAtomCue_eventValidate_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USoundAtomCue_Validate_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SoundAtomCue_eventValidate_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USoundAtomCue_Validate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SoundAtomCue_eventValidate_Parms), &Z_Construct_UFunction_USoundAtomCue_Validate_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundAtomCue_Validate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCue_Validate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundAtomCue_Validate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SoundAtomCue.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundAtomCue_Validate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundAtomCue, nullptr, "Validate", nullptr, nullptr, sizeof(SoundAtomCue_eventValidate_Parms), Z_Construct_UFunction_USoundAtomCue_Validate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCue_Validate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USoundAtomCue_Validate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCue_Validate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USoundAtomCue_Validate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USoundAtomCue_Validate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USoundAtomCue_NoRegister()
	{
		return USoundAtomCue::StaticClass();
	}
	struct Z_Construct_UClass_USoundAtomCue_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CueSheet_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CueSheet;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CueName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CueName;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LoopSetting_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoopSetting_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LoopSetting;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bApplyAtomParameter_MetaData[];
#endif
		static void NewProp_bApplyAtomParameter_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bApplyAtomParameter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstWaveDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FirstWaveDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttenuationSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttenuationSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableAudioVolume_MetaData[];
#endif
		static void NewProp_bEnableAudioVolume_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableAudioVolume;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsMovable_MetaData[];
#endif
		static void NewProp_bIsMovable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsMovable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanStraddleAudioVolume_MetaData[];
#endif
		static void NewProp_bCanStraddleAudioVolume_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanStraddleAudioVolume;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseDistanceToEnableAudioVolume_MetaData[];
#endif
		static void NewProp_bUseDistanceToEnableAudioVolume_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseDistanceToEnableAudioVolume;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinDistanceToEnableAudioVolume_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinDistanceToEnableAudioVolume;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseAreaSoundVolume_MetaData[];
#endif
		static void NewProp_bUseAreaSoundVolume_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseAreaSoundVolume;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpdateRateForFrame_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UpdateRateForFrame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Region_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Region;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEconomicTick_MetaData[];
#endif
		static void NewProp_bEconomicTick_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEconomicTick;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideEconomicTickSettings_MetaData[];
#endif
		static void NewProp_bOverrideEconomicTickSettings_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideEconomicTickSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EconomicTickDistanceMargin_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EconomicTickDistanceMargin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EconomicTickFrequency_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EconomicTickFrequency;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableDistanceCulling_MetaData[];
#endif
		static void NewProp_bEnableDistanceCulling_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableDistanceCulling;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideCullSettings_MetaData[];
#endif
		static void NewProp_bOverrideCullSettings_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideCullSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CullDistanceMargin_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CullDistanceMargin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EconomicTickMarginDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EconomicTickMarginDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLoopSettingByAtomCraft_MetaData[];
#endif
		static void NewProp_bLoopSettingByAtomCraft_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLoopSettingByAtomCraft;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCullingSoundPlayingProcessByDistance_MetaData[];
#endif
		static void NewProp_bCullingSoundPlayingProcessByDistance_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCullingSoundPlayingProcessByDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseLegacyCullingSettings_MetaData[];
#endif
		static void NewProp_bUseLegacyCullingSettings_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseLegacyCullingSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxProcessDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxProcessDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideCullingSettings_MetaData[];
#endif
		static void NewProp_bOverrideCullingSettings_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideCullingSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CullingMarginDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CullingMarginDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLoop_MetaData[];
#endif
		static void NewProp_bLoop_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLoop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultAttenuation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DefaultAttenuation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundAtomCue_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USoundAtomCue_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USoundAtomCue_BP_GetCueInfo, "BP_GetCueInfo" }, // 2675042666
		{ &Z_Construct_UFunction_USoundAtomCue_GetCullDistance, "GetCullDistance" }, // 1157198031
		{ &Z_Construct_UFunction_USoundAtomCue_GetCullDistanceMarginToApply, "GetCullDistanceMarginToApply" }, // 663304583
		{ &Z_Construct_UFunction_USoundAtomCue_GetCullingBoundaryDistanceToUse, "GetCullingBoundaryDistanceToUse" }, // 4095513891
		{ &Z_Construct_UFunction_USoundAtomCue_GetCullingMarginDistanceToUse, "GetCullingMarginDistanceToUse" }, // 2043234534
		{ &Z_Construct_UFunction_USoundAtomCue_GetEconomicTickBoundaryDistanceToUse, "GetEconomicTickBoundaryDistanceToUse" }, // 4076217172
		{ &Z_Construct_UFunction_USoundAtomCue_GetEconomicTickDistance, "GetEconomicTickDistance" }, // 3350264826
		{ &Z_Construct_UFunction_USoundAtomCue_GetEconomicTickDistanceMarginToApply, "GetEconomicTickDistanceMarginToApply" }, // 948997739
		{ &Z_Construct_UFunction_USoundAtomCue_GetEconomicTickFrequencyToApply, "GetEconomicTickFrequencyToApply" }, // 998780937
		{ &Z_Construct_UFunction_USoundAtomCue_GetEconomicTickFrequencyToUse, "GetEconomicTickFrequencyToUse" }, // 2187848502
		{ &Z_Construct_UFunction_USoundAtomCue_GetEconomicTickMarginDistanceToUse, "GetEconomicTickMarginDistanceToUse" }, // 805909789
		{ &Z_Construct_UFunction_USoundAtomCue_GetMaxAttenuationDistanceToApply, "GetMaxAttenuationDistanceToApply" }, // 2714935048
		{ &Z_Construct_UFunction_USoundAtomCue_GetMaxAttenuationDistanceToUse, "GetMaxAttenuationDistanceToUse" }, // 3925805487
		{ &Z_Construct_UFunction_USoundAtomCue_IsEconomicTickEnabled, "IsEconomicTickEnabled" }, // 869168571
		{ &Z_Construct_UFunction_USoundAtomCue_IsLooping, "IsLooping" }, // 2926423145
		{ &Z_Construct_UFunction_USoundAtomCue_Validate, "Validate" }, // 3134550937
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundAtomCue_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SoundAtomCue.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SoundAtomCue.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundAtomCue_Statics::NewProp_CueSheet_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SoundAtomCue" },
		{ "ModuleRelativePath", "Public/SoundAtomCue.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USoundAtomCue_Statics::NewProp_CueSheet = { "CueSheet", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundAtomCue, CueSheet), Z_Construct_UClass_USoundAtomCueSheet_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USoundAtomCue_Statics::NewProp_CueSheet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundAtomCue_Statics::NewProp_CueSheet_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundAtomCue_Statics::NewProp_CueName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SoundAtomCue" },
		{ "ModuleRelativePath", "Public/SoundAtomCue.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USoundAtomCue_Statics::NewProp_CueName = { "CueName", nullptr, (EPropertyFlags)0x0010010000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundAtomCue, CueName), METADATA_PARAMS(Z_Construct_UClass_USoundAtomCue_Statics::NewProp_CueName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundAtomCue_Statics::NewProp_CueName_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USoundAtomCue_Statics::NewProp_LoopSetting_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundAtomCue_Statics::NewProp_LoopSetting_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SoundAtomCue" },
		{ "ModuleRelativePath", "Public/SoundAtomCue.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USoundAtomCue_Statics::NewProp_LoopSetting = { "LoopSetting", nullptr, (EPropertyFlags)0x0010010000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundAtomCue, LoopSetting), Z_Construct_UEnum_CriWareRuntime_EAtomLoopSetting, METADATA_PARAMS(Z_Construct_UClass_USoundAtomCue_Statics::NewProp_LoopSetting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundAtomCue_Statics::NewProp_LoopSetting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bApplyAtomParameter_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SoundAtomCue" },
		{ "ModuleRelativePath", "Public/SoundAtomCue.h" },
	};
#endif
	void Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bApplyAtomParameter_SetBit(void* Obj)
	{
		((USoundAtomCue*)Obj)->bApplyAtomParameter = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bApplyAtomParameter = { "bApplyAtomParameter", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USoundAtomCue), &Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bApplyAtomParameter_SetBit, METADATA_PARAMS(Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bApplyAtomParameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bApplyAtomParameter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundAtomCue_Statics::NewProp_Duration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SoundAtomCue" },
		{ "ModuleRelativePath", "Public/SoundAtomCue.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundAtomCue_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010010000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundAtomCue, Duration), METADATA_PARAMS(Z_Construct_UClass_USoundAtomCue_Statics::NewProp_Duration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundAtomCue_Statics::NewProp_Duration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundAtomCue_Statics::NewProp_FirstWaveDuration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SoundAtomCue" },
		{ "ModuleRelativePath", "Public/SoundAtomCue.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundAtomCue_Statics::NewProp_FirstWaveDuration = { "FirstWaveDuration", nullptr, (EPropertyFlags)0x0010010000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundAtomCue, FirstWaveDuration), METADATA_PARAMS(Z_Construct_UClass_USoundAtomCue_Statics::NewProp_FirstWaveDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundAtomCue_Statics::NewProp_FirstWaveDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundAtomCue_Statics::NewProp_AttenuationSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SoundAtomCue" },
		{ "ModuleRelativePath", "Public/SoundAtomCue.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USoundAtomCue_Statics::NewProp_AttenuationSettings = { "AttenuationSettings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundAtomCue, AttenuationSettings), Z_Construct_UClass_USoundAttenuation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USoundAtomCue_Statics::NewProp_AttenuationSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundAtomCue_Statics::NewProp_AttenuationSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bEnableAudioVolume_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SoundAtomCue" },
		{ "ModuleRelativePath", "Public/SoundAtomCue.h" },
	};
#endif
	void Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bEnableAudioVolume_SetBit(void* Obj)
	{
		((USoundAtomCue*)Obj)->bEnableAudioVolume = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bEnableAudioVolume = { "bEnableAudioVolume", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USoundAtomCue), &Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bEnableAudioVolume_SetBit, METADATA_PARAMS(Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bEnableAudioVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bEnableAudioVolume_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bIsMovable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SoundAtomCue" },
		{ "ModuleRelativePath", "Public/SoundAtomCue.h" },
	};
#endif
	void Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bIsMovable_SetBit(void* Obj)
	{
		((USoundAtomCue*)Obj)->bIsMovable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bIsMovable = { "bIsMovable", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USoundAtomCue), &Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bIsMovable_SetBit, METADATA_PARAMS(Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bIsMovable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bIsMovable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bCanStraddleAudioVolume_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SoundAtomCue" },
		{ "ModuleRelativePath", "Public/SoundAtomCue.h" },
	};
#endif
	void Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bCanStraddleAudioVolume_SetBit(void* Obj)
	{
		((USoundAtomCue*)Obj)->bCanStraddleAudioVolume = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bCanStraddleAudioVolume = { "bCanStraddleAudioVolume", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USoundAtomCue), &Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bCanStraddleAudioVolume_SetBit, METADATA_PARAMS(Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bCanStraddleAudioVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bCanStraddleAudioVolume_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bUseDistanceToEnableAudioVolume_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SoundAtomCue" },
		{ "ModuleRelativePath", "Public/SoundAtomCue.h" },
	};
#endif
	void Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bUseDistanceToEnableAudioVolume_SetBit(void* Obj)
	{
		((USoundAtomCue*)Obj)->bUseDistanceToEnableAudioVolume = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bUseDistanceToEnableAudioVolume = { "bUseDistanceToEnableAudioVolume", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USoundAtomCue), &Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bUseDistanceToEnableAudioVolume_SetBit, METADATA_PARAMS(Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bUseDistanceToEnableAudioVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bUseDistanceToEnableAudioVolume_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundAtomCue_Statics::NewProp_MinDistanceToEnableAudioVolume_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SoundAtomCue" },
		{ "ModuleRelativePath", "Public/SoundAtomCue.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundAtomCue_Statics::NewProp_MinDistanceToEnableAudioVolume = { "MinDistanceToEnableAudioVolume", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundAtomCue, MinDistanceToEnableAudioVolume), METADATA_PARAMS(Z_Construct_UClass_USoundAtomCue_Statics::NewProp_MinDistanceToEnableAudioVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundAtomCue_Statics::NewProp_MinDistanceToEnableAudioVolume_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bUseAreaSoundVolume_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SoundAtomCue" },
		{ "ModuleRelativePath", "Public/SoundAtomCue.h" },
	};
#endif
	void Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bUseAreaSoundVolume_SetBit(void* Obj)
	{
		((USoundAtomCue*)Obj)->bUseAreaSoundVolume = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bUseAreaSoundVolume = { "bUseAreaSoundVolume", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USoundAtomCue), &Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bUseAreaSoundVolume_SetBit, METADATA_PARAMS(Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bUseAreaSoundVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bUseAreaSoundVolume_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundAtomCue_Statics::NewProp_UpdateRateForFrame_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SoundAtomCue" },
		{ "ModuleRelativePath", "Public/SoundAtomCue.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USoundAtomCue_Statics::NewProp_UpdateRateForFrame = { "UpdateRateForFrame", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundAtomCue, UpdateRateForFrame), METADATA_PARAMS(Z_Construct_UClass_USoundAtomCue_Statics::NewProp_UpdateRateForFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundAtomCue_Statics::NewProp_UpdateRateForFrame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundAtomCue_Statics::NewProp_Region_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SoundAtomCue" },
		{ "ModuleRelativePath", "Public/SoundAtomCue.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USoundAtomCue_Statics::NewProp_Region = { "Region", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundAtomCue, Region), Z_Construct_UClass_UAtom3dRegion_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USoundAtomCue_Statics::NewProp_Region_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundAtomCue_Statics::NewProp_Region_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bEconomicTick_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SoundAtomCue" },
		{ "ModuleRelativePath", "Public/SoundAtomCue.h" },
	};
#endif
	void Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bEconomicTick_SetBit(void* Obj)
	{
		((USoundAtomCue*)Obj)->bEconomicTick = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bEconomicTick = { "bEconomicTick", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USoundAtomCue), &Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bEconomicTick_SetBit, METADATA_PARAMS(Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bEconomicTick_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bEconomicTick_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bOverrideEconomicTickSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SoundAtomCue" },
		{ "ModuleRelativePath", "Public/SoundAtomCue.h" },
	};
#endif
	void Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bOverrideEconomicTickSettings_SetBit(void* Obj)
	{
		((USoundAtomCue*)Obj)->bOverrideEconomicTickSettings = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bOverrideEconomicTickSettings = { "bOverrideEconomicTickSettings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USoundAtomCue), &Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bOverrideEconomicTickSettings_SetBit, METADATA_PARAMS(Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bOverrideEconomicTickSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bOverrideEconomicTickSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundAtomCue_Statics::NewProp_EconomicTickDistanceMargin_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SoundAtomCue" },
		{ "ModuleRelativePath", "Public/SoundAtomCue.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundAtomCue_Statics::NewProp_EconomicTickDistanceMargin = { "EconomicTickDistanceMargin", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundAtomCue, EconomicTickDistanceMargin), METADATA_PARAMS(Z_Construct_UClass_USoundAtomCue_Statics::NewProp_EconomicTickDistanceMargin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundAtomCue_Statics::NewProp_EconomicTickDistanceMargin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundAtomCue_Statics::NewProp_EconomicTickFrequency_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SoundAtomCue" },
		{ "ModuleRelativePath", "Public/SoundAtomCue.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USoundAtomCue_Statics::NewProp_EconomicTickFrequency = { "EconomicTickFrequency", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundAtomCue, EconomicTickFrequency), METADATA_PARAMS(Z_Construct_UClass_USoundAtomCue_Statics::NewProp_EconomicTickFrequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundAtomCue_Statics::NewProp_EconomicTickFrequency_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bEnableDistanceCulling_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SoundAtomCue" },
		{ "ModuleRelativePath", "Public/SoundAtomCue.h" },
	};
#endif
	void Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bEnableDistanceCulling_SetBit(void* Obj)
	{
		((USoundAtomCue*)Obj)->bEnableDistanceCulling = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bEnableDistanceCulling = { "bEnableDistanceCulling", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USoundAtomCue), &Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bEnableDistanceCulling_SetBit, METADATA_PARAMS(Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bEnableDistanceCulling_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bEnableDistanceCulling_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bOverrideCullSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SoundAtomCue" },
		{ "ModuleRelativePath", "Public/SoundAtomCue.h" },
	};
#endif
	void Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bOverrideCullSettings_SetBit(void* Obj)
	{
		((USoundAtomCue*)Obj)->bOverrideCullSettings = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bOverrideCullSettings = { "bOverrideCullSettings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USoundAtomCue), &Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bOverrideCullSettings_SetBit, METADATA_PARAMS(Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bOverrideCullSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bOverrideCullSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundAtomCue_Statics::NewProp_CullDistanceMargin_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SoundAtomCue" },
		{ "ModuleRelativePath", "Public/SoundAtomCue.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundAtomCue_Statics::NewProp_CullDistanceMargin = { "CullDistanceMargin", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundAtomCue, CullDistanceMargin), METADATA_PARAMS(Z_Construct_UClass_USoundAtomCue_Statics::NewProp_CullDistanceMargin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundAtomCue_Statics::NewProp_CullDistanceMargin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundAtomCue_Statics::NewProp_EconomicTickMarginDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SoundAtomCue" },
		{ "ModuleRelativePath", "Public/SoundAtomCue.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundAtomCue_Statics::NewProp_EconomicTickMarginDistance = { "EconomicTickMarginDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundAtomCue, EconomicTickMarginDistance), METADATA_PARAMS(Z_Construct_UClass_USoundAtomCue_Statics::NewProp_EconomicTickMarginDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundAtomCue_Statics::NewProp_EconomicTickMarginDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bLoopSettingByAtomCraft_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SoundAtomCue" },
		{ "ModuleRelativePath", "Public/SoundAtomCue.h" },
	};
#endif
	void Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bLoopSettingByAtomCraft_SetBit(void* Obj)
	{
		((USoundAtomCue*)Obj)->bLoopSettingByAtomCraft = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bLoopSettingByAtomCraft = { "bLoopSettingByAtomCraft", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USoundAtomCue), &Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bLoopSettingByAtomCraft_SetBit, METADATA_PARAMS(Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bLoopSettingByAtomCraft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bLoopSettingByAtomCraft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bCullingSoundPlayingProcessByDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SoundAtomCue" },
		{ "ModuleRelativePath", "Public/SoundAtomCue.h" },
	};
#endif
	void Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bCullingSoundPlayingProcessByDistance_SetBit(void* Obj)
	{
		((USoundAtomCue*)Obj)->bCullingSoundPlayingProcessByDistance = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bCullingSoundPlayingProcessByDistance = { "bCullingSoundPlayingProcessByDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USoundAtomCue), &Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bCullingSoundPlayingProcessByDistance_SetBit, METADATA_PARAMS(Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bCullingSoundPlayingProcessByDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bCullingSoundPlayingProcessByDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bUseLegacyCullingSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SoundAtomCue" },
		{ "ModuleRelativePath", "Public/SoundAtomCue.h" },
	};
#endif
	void Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bUseLegacyCullingSettings_SetBit(void* Obj)
	{
		((USoundAtomCue*)Obj)->bUseLegacyCullingSettings = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bUseLegacyCullingSettings = { "bUseLegacyCullingSettings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USoundAtomCue), &Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bUseLegacyCullingSettings_SetBit, METADATA_PARAMS(Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bUseLegacyCullingSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bUseLegacyCullingSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundAtomCue_Statics::NewProp_MaxProcessDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SoundAtomCue" },
		{ "ModuleRelativePath", "Public/SoundAtomCue.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundAtomCue_Statics::NewProp_MaxProcessDistance = { "MaxProcessDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundAtomCue, MaxProcessDistance), METADATA_PARAMS(Z_Construct_UClass_USoundAtomCue_Statics::NewProp_MaxProcessDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundAtomCue_Statics::NewProp_MaxProcessDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bOverrideCullingSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SoundAtomCue" },
		{ "ModuleRelativePath", "Public/SoundAtomCue.h" },
	};
#endif
	void Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bOverrideCullingSettings_SetBit(void* Obj)
	{
		((USoundAtomCue*)Obj)->bOverrideCullingSettings = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bOverrideCullingSettings = { "bOverrideCullingSettings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USoundAtomCue), &Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bOverrideCullingSettings_SetBit, METADATA_PARAMS(Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bOverrideCullingSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bOverrideCullingSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundAtomCue_Statics::NewProp_CullingMarginDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SoundAtomCue" },
		{ "ModuleRelativePath", "Public/SoundAtomCue.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundAtomCue_Statics::NewProp_CullingMarginDistance = { "CullingMarginDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundAtomCue, CullingMarginDistance), METADATA_PARAMS(Z_Construct_UClass_USoundAtomCue_Statics::NewProp_CullingMarginDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundAtomCue_Statics::NewProp_CullingMarginDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bLoop_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SoundAtomCue" },
		{ "ModuleRelativePath", "Public/SoundAtomCue.h" },
	};
#endif
	void Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bLoop_SetBit(void* Obj)
	{
		((USoundAtomCue*)Obj)->bLoop = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bLoop = { "bLoop", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USoundAtomCue), &Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bLoop_SetBit, METADATA_PARAMS(Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bLoop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bLoop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundAtomCue_Statics::NewProp_DefaultAttenuation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SoundAtomCue" },
		{ "ModuleRelativePath", "Public/SoundAtomCue.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USoundAtomCue_Statics::NewProp_DefaultAttenuation = { "DefaultAttenuation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundAtomCue, DefaultAttenuation), Z_Construct_UClass_USoundAttenuation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USoundAtomCue_Statics::NewProp_DefaultAttenuation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundAtomCue_Statics::NewProp_DefaultAttenuation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoundAtomCue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCue_Statics::NewProp_CueSheet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCue_Statics::NewProp_CueName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCue_Statics::NewProp_LoopSetting_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCue_Statics::NewProp_LoopSetting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bApplyAtomParameter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCue_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCue_Statics::NewProp_FirstWaveDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCue_Statics::NewProp_AttenuationSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bEnableAudioVolume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bIsMovable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bCanStraddleAudioVolume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bUseDistanceToEnableAudioVolume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCue_Statics::NewProp_MinDistanceToEnableAudioVolume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bUseAreaSoundVolume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCue_Statics::NewProp_UpdateRateForFrame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCue_Statics::NewProp_Region,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bEconomicTick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bOverrideEconomicTickSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCue_Statics::NewProp_EconomicTickDistanceMargin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCue_Statics::NewProp_EconomicTickFrequency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bEnableDistanceCulling,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bOverrideCullSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCue_Statics::NewProp_CullDistanceMargin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCue_Statics::NewProp_EconomicTickMarginDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bLoopSettingByAtomCraft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bCullingSoundPlayingProcessByDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bUseLegacyCullingSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCue_Statics::NewProp_MaxProcessDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bOverrideCullingSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCue_Statics::NewProp_CullingMarginDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bLoop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCue_Statics::NewProp_DefaultAttenuation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundAtomCue_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundAtomCue>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USoundAtomCue_Statics::ClassParams = {
		&USoundAtomCue::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USoundAtomCue_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USoundAtomCue_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USoundAtomCue_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USoundAtomCue_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundAtomCue()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USoundAtomCue_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USoundAtomCue, 90544106);
	template<> CRIWARERUNTIME_API UClass* StaticClass<USoundAtomCue>()
	{
		return USoundAtomCue::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USoundAtomCue(Z_Construct_UClass_USoundAtomCue, &USoundAtomCue::StaticClass, TEXT("/Script/CriWareRuntime"), TEXT("USoundAtomCue"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundAtomCue);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
