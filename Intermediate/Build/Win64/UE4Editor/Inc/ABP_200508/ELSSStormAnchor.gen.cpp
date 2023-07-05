// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSStormAnchor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSStormAnchor() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_AELSSStormAnchor_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSStormAnchor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSStormPhaseParam();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AELSSStormAnchor::execGetAnnounceDuration)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetAnnounceDuration();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSStormAnchor::execGetDuration)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetDuration();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSStormAnchor::execGetIntervalDuration)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetIntervalDuration();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSStormAnchor::execGetRadius)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetRadius();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSStormAnchor::execGetRadiusMeter)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetRadiusMeter();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSStormAnchor::execGetShrinkDuration)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetShrinkDuration();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSStormAnchor::execSetParam)
	{
		P_GET_STRUCT_REF(FSSStormPhaseParam,Z_Param_Out_Param);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetParam(Z_Param_Out_Param);
		P_NATIVE_END;
	}
	void AELSSStormAnchor::StaticRegisterNativesAELSSStormAnchor()
	{
		UClass* Class = AELSSStormAnchor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAnnounceDuration", &AELSSStormAnchor::execGetAnnounceDuration },
			{ "GetDuration", &AELSSStormAnchor::execGetDuration },
			{ "GetIntervalDuration", &AELSSStormAnchor::execGetIntervalDuration },
			{ "GetRadius", &AELSSStormAnchor::execGetRadius },
			{ "GetRadiusMeter", &AELSSStormAnchor::execGetRadiusMeter },
			{ "GetShrinkDuration", &AELSSStormAnchor::execGetShrinkDuration },
			{ "SetParam", &AELSSStormAnchor::execSetParam },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AELSSStormAnchor_GetAnnounceDuration_Statics
	{
		struct ELSSStormAnchor_eventGetAnnounceDuration_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELSSStormAnchor_GetAnnounceDuration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSStormAnchor_eventGetAnnounceDuration_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSStormAnchor_GetAnnounceDuration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSStormAnchor_GetAnnounceDuration_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSStormAnchor_GetAnnounceDuration_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSStormAnchor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSStormAnchor_GetAnnounceDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSStormAnchor, nullptr, "GetAnnounceDuration", nullptr, nullptr, sizeof(ELSSStormAnchor_eventGetAnnounceDuration_Parms), Z_Construct_UFunction_AELSSStormAnchor_GetAnnounceDuration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSStormAnchor_GetAnnounceDuration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSStormAnchor_GetAnnounceDuration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSStormAnchor_GetAnnounceDuration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSStormAnchor_GetAnnounceDuration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSStormAnchor_GetAnnounceDuration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSStormAnchor_GetDuration_Statics
	{
		struct ELSSStormAnchor_eventGetDuration_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELSSStormAnchor_GetDuration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSStormAnchor_eventGetDuration_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSStormAnchor_GetDuration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSStormAnchor_GetDuration_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSStormAnchor_GetDuration_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSStormAnchor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSStormAnchor_GetDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSStormAnchor, nullptr, "GetDuration", nullptr, nullptr, sizeof(ELSSStormAnchor_eventGetDuration_Parms), Z_Construct_UFunction_AELSSStormAnchor_GetDuration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSStormAnchor_GetDuration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSStormAnchor_GetDuration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSStormAnchor_GetDuration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSStormAnchor_GetDuration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSStormAnchor_GetDuration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSStormAnchor_GetIntervalDuration_Statics
	{
		struct ELSSStormAnchor_eventGetIntervalDuration_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELSSStormAnchor_GetIntervalDuration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSStormAnchor_eventGetIntervalDuration_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSStormAnchor_GetIntervalDuration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSStormAnchor_GetIntervalDuration_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSStormAnchor_GetIntervalDuration_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSStormAnchor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSStormAnchor_GetIntervalDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSStormAnchor, nullptr, "GetIntervalDuration", nullptr, nullptr, sizeof(ELSSStormAnchor_eventGetIntervalDuration_Parms), Z_Construct_UFunction_AELSSStormAnchor_GetIntervalDuration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSStormAnchor_GetIntervalDuration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSStormAnchor_GetIntervalDuration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSStormAnchor_GetIntervalDuration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSStormAnchor_GetIntervalDuration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSStormAnchor_GetIntervalDuration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSStormAnchor_GetRadius_Statics
	{
		struct ELSSStormAnchor_eventGetRadius_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELSSStormAnchor_GetRadius_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSStormAnchor_eventGetRadius_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSStormAnchor_GetRadius_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSStormAnchor_GetRadius_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSStormAnchor_GetRadius_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSStormAnchor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSStormAnchor_GetRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSStormAnchor, nullptr, "GetRadius", nullptr, nullptr, sizeof(ELSSStormAnchor_eventGetRadius_Parms), Z_Construct_UFunction_AELSSStormAnchor_GetRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSStormAnchor_GetRadius_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSStormAnchor_GetRadius_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSStormAnchor_GetRadius_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSStormAnchor_GetRadius()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSStormAnchor_GetRadius_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSStormAnchor_GetRadiusMeter_Statics
	{
		struct ELSSStormAnchor_eventGetRadiusMeter_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELSSStormAnchor_GetRadiusMeter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSStormAnchor_eventGetRadiusMeter_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSStormAnchor_GetRadiusMeter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSStormAnchor_GetRadiusMeter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSStormAnchor_GetRadiusMeter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSStormAnchor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSStormAnchor_GetRadiusMeter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSStormAnchor, nullptr, "GetRadiusMeter", nullptr, nullptr, sizeof(ELSSStormAnchor_eventGetRadiusMeter_Parms), Z_Construct_UFunction_AELSSStormAnchor_GetRadiusMeter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSStormAnchor_GetRadiusMeter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSStormAnchor_GetRadiusMeter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSStormAnchor_GetRadiusMeter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSStormAnchor_GetRadiusMeter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSStormAnchor_GetRadiusMeter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSStormAnchor_GetShrinkDuration_Statics
	{
		struct ELSSStormAnchor_eventGetShrinkDuration_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELSSStormAnchor_GetShrinkDuration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSStormAnchor_eventGetShrinkDuration_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSStormAnchor_GetShrinkDuration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSStormAnchor_GetShrinkDuration_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSStormAnchor_GetShrinkDuration_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSStormAnchor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSStormAnchor_GetShrinkDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSStormAnchor, nullptr, "GetShrinkDuration", nullptr, nullptr, sizeof(ELSSStormAnchor_eventGetShrinkDuration_Parms), Z_Construct_UFunction_AELSSStormAnchor_GetShrinkDuration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSStormAnchor_GetShrinkDuration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSStormAnchor_GetShrinkDuration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSStormAnchor_GetShrinkDuration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSStormAnchor_GetShrinkDuration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSStormAnchor_GetShrinkDuration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSStormAnchor_SetParam_Statics
	{
		struct ELSSStormAnchor_eventSetParam_Parms
		{
			FSSStormPhaseParam Param;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Param_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Param;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSStormAnchor_SetParam_Statics::NewProp_Param_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSStormAnchor_SetParam_Statics::NewProp_Param = { "Param", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSStormAnchor_eventSetParam_Parms, Param), Z_Construct_UScriptStruct_FSSStormPhaseParam, METADATA_PARAMS(Z_Construct_UFunction_AELSSStormAnchor_SetParam_Statics::NewProp_Param_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSStormAnchor_SetParam_Statics::NewProp_Param_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSStormAnchor_SetParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSStormAnchor_SetParam_Statics::NewProp_Param,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSStormAnchor_SetParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSStormAnchor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSStormAnchor_SetParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSStormAnchor, nullptr, "SetParam", nullptr, nullptr, sizeof(ELSSStormAnchor_eventSetParam_Parms), Z_Construct_UFunction_AELSSStormAnchor_SetParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSStormAnchor_SetParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSStormAnchor_SetParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSStormAnchor_SetParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSStormAnchor_SetParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSStormAnchor_SetParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AELSSStormAnchor_NoRegister()
	{
		return AELSSStormAnchor::StaticClass();
	}
	struct Z_Construct_UClass_AELSSStormAnchor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SceneComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SceneComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_phaseParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_phaseParam;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AELSSStormAnchor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AELSSStormAnchor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AELSSStormAnchor_GetAnnounceDuration, "GetAnnounceDuration" }, // 3133207403
		{ &Z_Construct_UFunction_AELSSStormAnchor_GetDuration, "GetDuration" }, // 1602981959
		{ &Z_Construct_UFunction_AELSSStormAnchor_GetIntervalDuration, "GetIntervalDuration" }, // 2755021556
		{ &Z_Construct_UFunction_AELSSStormAnchor_GetRadius, "GetRadius" }, // 2768814318
		{ &Z_Construct_UFunction_AELSSStormAnchor_GetRadiusMeter, "GetRadiusMeter" }, // 1548967840
		{ &Z_Construct_UFunction_AELSSStormAnchor_GetShrinkDuration, "GetShrinkDuration" }, // 776545402
		{ &Z_Construct_UFunction_AELSSStormAnchor_SetParam, "SetParam" }, // 1606598671
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSStormAnchor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSStormAnchor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSStormAnchor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSStormAnchor_Statics::NewProp_SceneComp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSStormAnchor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSStormAnchor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSStormAnchor_Statics::NewProp_SceneComp = { "SceneComp", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSStormAnchor, SceneComp), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSStormAnchor_Statics::NewProp_SceneComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSStormAnchor_Statics::NewProp_SceneComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSStormAnchor_Statics::NewProp_phaseParam_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSStormAnchor" },
		{ "ModuleRelativePath", "Public/ELSSStormAnchor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AELSSStormAnchor_Statics::NewProp_phaseParam = { "phaseParam", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSStormAnchor, phaseParam), Z_Construct_UScriptStruct_FSSStormPhaseParam, METADATA_PARAMS(Z_Construct_UClass_AELSSStormAnchor_Statics::NewProp_phaseParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSStormAnchor_Statics::NewProp_phaseParam_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AELSSStormAnchor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSStormAnchor_Statics::NewProp_SceneComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSStormAnchor_Statics::NewProp_phaseParam,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELSSStormAnchor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELSSStormAnchor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELSSStormAnchor_Statics::ClassParams = {
		&AELSSStormAnchor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AELSSStormAnchor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AELSSStormAnchor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AELSSStormAnchor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSStormAnchor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELSSStormAnchor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELSSStormAnchor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELSSStormAnchor, 1772167522);
	template<> ABP_200508_API UClass* StaticClass<AELSSStormAnchor>()
	{
		return AELSSStormAnchor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELSSStormAnchor(Z_Construct_UClass_AELSSStormAnchor, &AELSSStormAnchor::StaticClass, TEXT("/Script/ABP_200508"), TEXT("AELSSStormAnchor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELSSStormAnchor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
