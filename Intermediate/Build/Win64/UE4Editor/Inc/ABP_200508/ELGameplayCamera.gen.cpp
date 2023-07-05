// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELGameplayCamera.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELGameplayCamera() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_AELGameplayCamera_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELGameplayCamera();
	ELITE_GAME_API UClass* Z_Construct_UClass_AGameplayCamera();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayCameraParam();
	ABP_200508_API UClass* Z_Construct_UClass_AELCharacter_Native_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	DEFINE_FUNCTION(AELGameplayCamera::execSetNativeParam)
	{
		P_GET_OBJECT(UCameraComponent,Z_Param_Camera);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetNativeParam(Z_Param_Camera);
		P_NATIVE_END;
	}
	void AELGameplayCamera::StaticRegisterNativesAELGameplayCamera()
	{
		UClass* Class = AELGameplayCamera::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetNativeParam", &AELGameplayCamera::execSetNativeParam },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AELGameplayCamera_SetNativeParam_Statics
	{
		struct ELGameplayCamera_eventSetNativeParam_Parms
		{
			UCameraComponent* Camera;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Camera;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELGameplayCamera_SetNativeParam_Statics::NewProp_Camera_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELGameplayCamera_SetNativeParam_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELGameplayCamera_eventSetNativeParam_Parms, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AELGameplayCamera_SetNativeParam_Statics::NewProp_Camera_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELGameplayCamera_SetNativeParam_Statics::NewProp_Camera_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELGameplayCamera_SetNativeParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELGameplayCamera_SetNativeParam_Statics::NewProp_Camera,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELGameplayCamera_SetNativeParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELGameplayCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELGameplayCamera_SetNativeParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELGameplayCamera, nullptr, "SetNativeParam", nullptr, nullptr, sizeof(ELGameplayCamera_eventSetNativeParam_Parms), Z_Construct_UFunction_AELGameplayCamera_SetNativeParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELGameplayCamera_SetNativeParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELGameplayCamera_SetNativeParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELGameplayCamera_SetNativeParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELGameplayCamera_SetNativeParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELGameplayCamera_SetNativeParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AELGameplayCamera_NoRegister()
	{
		return AELGameplayCamera::StaticClass();
	}
	struct Z_Construct_UClass_AELGameplayCamera_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameplayCameraParamDataTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GameplayCameraParamDataTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugDispCollision_MetaData[];
#endif
		static void NewProp_DebugDispCollision_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DebugDispCollision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameplayCameraParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GameplayCameraParam;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RowName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_RowName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RequestSkipInterpolationFlag_MetaData[];
#endif
		static void NewProp_RequestSkipInterpolationFlag_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_RequestSkipInterpolationFlag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkipInterpolation_MetaData[];
#endif
		static void NewProp_SkipInterpolation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SkipInterpolation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnlyViewChar_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_OnlyViewChar;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnlyViewCharSocket_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_OnlyViewCharSocket;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnlyViewSec_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OnlyViewSec;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZoomDelaySubmissionEnd_MetaData[];
#endif
		static void NewProp_ZoomDelaySubmissionEnd_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ZoomDelaySubmissionEnd;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZoomSubTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_ZoomSubTarget;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UserAddPoints_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserAddPoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UserAddPoints;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UserOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIncludeManagerCharacters_N_MetaData[];
#endif
		static void NewProp_bIncludeManagerCharacters_N_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIncludeManagerCharacters_N;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ViewCharacters_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ViewCharacters_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ViewCharacters;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AELGameplayCamera_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameplayCamera,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AELGameplayCamera_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AELGameplayCamera_SetNativeParam, "SetNativeParam" }, // 2402657653
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELGameplayCamera_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELGameplayCamera.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELGameplayCamera.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELGameplayCamera_Statics::NewProp_GameplayCameraParamDataTable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELGameplayCamera" },
		{ "ModuleRelativePath", "Public/ELGameplayCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELGameplayCamera_Statics::NewProp_GameplayCameraParamDataTable = { "GameplayCameraParamDataTable", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELGameplayCamera, GameplayCameraParamDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELGameplayCamera_Statics::NewProp_GameplayCameraParamDataTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELGameplayCamera_Statics::NewProp_GameplayCameraParamDataTable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELGameplayCamera_Statics::NewProp_DebugDispCollision_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELGameplayCamera" },
		{ "ModuleRelativePath", "Public/ELGameplayCamera.h" },
	};
#endif
	void Z_Construct_UClass_AELGameplayCamera_Statics::NewProp_DebugDispCollision_SetBit(void* Obj)
	{
		((AELGameplayCamera*)Obj)->DebugDispCollision = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AELGameplayCamera_Statics::NewProp_DebugDispCollision = { "DebugDispCollision", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AELGameplayCamera), &Z_Construct_UClass_AELGameplayCamera_Statics::NewProp_DebugDispCollision_SetBit, METADATA_PARAMS(Z_Construct_UClass_AELGameplayCamera_Statics::NewProp_DebugDispCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELGameplayCamera_Statics::NewProp_DebugDispCollision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELGameplayCamera_Statics::NewProp_GameplayCameraParam_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELGameplayCamera" },
		{ "ModuleRelativePath", "Public/ELGameplayCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AELGameplayCamera_Statics::NewProp_GameplayCameraParam = { "GameplayCameraParam", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELGameplayCamera, GameplayCameraParam), Z_Construct_UScriptStruct_FGameplayCameraParam, METADATA_PARAMS(Z_Construct_UClass_AELGameplayCamera_Statics::NewProp_GameplayCameraParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELGameplayCamera_Statics::NewProp_GameplayCameraParam_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELGameplayCamera_Statics::NewProp_RowName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELGameplayCamera" },
		{ "ModuleRelativePath", "Public/ELGameplayCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AELGameplayCamera_Statics::NewProp_RowName = { "RowName", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELGameplayCamera, RowName), METADATA_PARAMS(Z_Construct_UClass_AELGameplayCamera_Statics::NewProp_RowName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELGameplayCamera_Statics::NewProp_RowName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELGameplayCamera_Statics::NewProp_RequestSkipInterpolationFlag_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELGameplayCamera" },
		{ "ModuleRelativePath", "Public/ELGameplayCamera.h" },
	};
#endif
	void Z_Construct_UClass_AELGameplayCamera_Statics::NewProp_RequestSkipInterpolationFlag_SetBit(void* Obj)
	{
		((AELGameplayCamera*)Obj)->RequestSkipInterpolationFlag = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AELGameplayCamera_Statics::NewProp_RequestSkipInterpolationFlag = { "RequestSkipInterpolationFlag", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AELGameplayCamera), &Z_Construct_UClass_AELGameplayCamera_Statics::NewProp_RequestSkipInterpolationFlag_SetBit, METADATA_PARAMS(Z_Construct_UClass_AELGameplayCamera_Statics::NewProp_RequestSkipInterpolationFlag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELGameplayCamera_Statics::NewProp_RequestSkipInterpolationFlag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELGameplayCamera_Statics::NewProp_SkipInterpolation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELGameplayCamera" },
		{ "ModuleRelativePath", "Public/ELGameplayCamera.h" },
	};
#endif
	void Z_Construct_UClass_AELGameplayCamera_Statics::NewProp_SkipInterpolation_SetBit(void* Obj)
	{
		((AELGameplayCamera*)Obj)->SkipInterpolation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AELGameplayCamera_Statics::NewProp_SkipInterpolation = { "SkipInterpolation", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AELGameplayCamera), &Z_Construct_UClass_AELGameplayCamera_Statics::NewProp_SkipInterpolation_SetBit, METADATA_PARAMS(Z_Construct_UClass_AELGameplayCamera_Statics::NewProp_SkipInterpolation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELGameplayCamera_Statics::NewProp_SkipInterpolation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELGameplayCamera_Statics::NewProp_OnlyViewChar_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELGameplayCamera" },
		{ "ModuleRelativePath", "Public/ELGameplayCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_AELGameplayCamera_Statics::NewProp_OnlyViewChar = { "OnlyViewChar", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELGameplayCamera, OnlyViewChar), Z_Construct_UClass_AELCharacter_Native_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELGameplayCamera_Statics::NewProp_OnlyViewChar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELGameplayCamera_Statics::NewProp_OnlyViewChar_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELGameplayCamera_Statics::NewProp_OnlyViewCharSocket_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELGameplayCamera" },
		{ "ModuleRelativePath", "Public/ELGameplayCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AELGameplayCamera_Statics::NewProp_OnlyViewCharSocket = { "OnlyViewCharSocket", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELGameplayCamera, OnlyViewCharSocket), METADATA_PARAMS(Z_Construct_UClass_AELGameplayCamera_Statics::NewProp_OnlyViewCharSocket_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELGameplayCamera_Statics::NewProp_OnlyViewCharSocket_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELGameplayCamera_Statics::NewProp_OnlyViewSec_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELGameplayCamera" },
		{ "ModuleRelativePath", "Public/ELGameplayCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELGameplayCamera_Statics::NewProp_OnlyViewSec = { "OnlyViewSec", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELGameplayCamera, OnlyViewSec), METADATA_PARAMS(Z_Construct_UClass_AELGameplayCamera_Statics::NewProp_OnlyViewSec_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELGameplayCamera_Statics::NewProp_OnlyViewSec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELGameplayCamera_Statics::NewProp_ZoomDelaySubmissionEnd_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELGameplayCamera" },
		{ "ModuleRelativePath", "Public/ELGameplayCamera.h" },
	};
#endif
	void Z_Construct_UClass_AELGameplayCamera_Statics::NewProp_ZoomDelaySubmissionEnd_SetBit(void* Obj)
	{
		((AELGameplayCamera*)Obj)->ZoomDelaySubmissionEnd = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AELGameplayCamera_Statics::NewProp_ZoomDelaySubmissionEnd = { "ZoomDelaySubmissionEnd", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AELGameplayCamera), &Z_Construct_UClass_AELGameplayCamera_Statics::NewProp_ZoomDelaySubmissionEnd_SetBit, METADATA_PARAMS(Z_Construct_UClass_AELGameplayCamera_Statics::NewProp_ZoomDelaySubmissionEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELGameplayCamera_Statics::NewProp_ZoomDelaySubmissionEnd_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELGameplayCamera_Statics::NewProp_ZoomSubTarget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELGameplayCamera" },
		{ "ModuleRelativePath", "Public/ELGameplayCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_AELGameplayCamera_Statics::NewProp_ZoomSubTarget = { "ZoomSubTarget", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELGameplayCamera, ZoomSubTarget), Z_Construct_UClass_AELCharacter_Native_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELGameplayCamera_Statics::NewProp_ZoomSubTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELGameplayCamera_Statics::NewProp_ZoomSubTarget_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AELGameplayCamera_Statics::NewProp_UserAddPoints_Inner = { "UserAddPoints", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELGameplayCamera_Statics::NewProp_UserAddPoints_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELGameplayCamera" },
		{ "ModuleRelativePath", "Public/ELGameplayCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AELGameplayCamera_Statics::NewProp_UserAddPoints = { "UserAddPoints", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELGameplayCamera, UserAddPoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AELGameplayCamera_Statics::NewProp_UserAddPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELGameplayCamera_Statics::NewProp_UserAddPoints_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELGameplayCamera_Statics::NewProp_UserOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELGameplayCamera" },
		{ "ModuleRelativePath", "Public/ELGameplayCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AELGameplayCamera_Statics::NewProp_UserOffset = { "UserOffset", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELGameplayCamera, UserOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AELGameplayCamera_Statics::NewProp_UserOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELGameplayCamera_Statics::NewProp_UserOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELGameplayCamera_Statics::NewProp_bIncludeManagerCharacters_N_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELGameplayCamera" },
		{ "ModuleRelativePath", "Public/ELGameplayCamera.h" },
	};
#endif
	void Z_Construct_UClass_AELGameplayCamera_Statics::NewProp_bIncludeManagerCharacters_N_SetBit(void* Obj)
	{
		((AELGameplayCamera*)Obj)->bIncludeManagerCharacters_N = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AELGameplayCamera_Statics::NewProp_bIncludeManagerCharacters_N = { "bIncludeManagerCharacters_N", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AELGameplayCamera), &Z_Construct_UClass_AELGameplayCamera_Statics::NewProp_bIncludeManagerCharacters_N_SetBit, METADATA_PARAMS(Z_Construct_UClass_AELGameplayCamera_Statics::NewProp_bIncludeManagerCharacters_N_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELGameplayCamera_Statics::NewProp_bIncludeManagerCharacters_N_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELGameplayCamera_Statics::NewProp_ViewCharacters_Inner = { "ViewCharacters", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AELCharacter_Native_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELGameplayCamera_Statics::NewProp_ViewCharacters_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELGameplayCamera" },
		{ "ModuleRelativePath", "Public/ELGameplayCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AELGameplayCamera_Statics::NewProp_ViewCharacters = { "ViewCharacters", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELGameplayCamera, ViewCharacters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AELGameplayCamera_Statics::NewProp_ViewCharacters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELGameplayCamera_Statics::NewProp_ViewCharacters_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AELGameplayCamera_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELGameplayCamera_Statics::NewProp_GameplayCameraParamDataTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELGameplayCamera_Statics::NewProp_DebugDispCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELGameplayCamera_Statics::NewProp_GameplayCameraParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELGameplayCamera_Statics::NewProp_RowName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELGameplayCamera_Statics::NewProp_RequestSkipInterpolationFlag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELGameplayCamera_Statics::NewProp_SkipInterpolation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELGameplayCamera_Statics::NewProp_OnlyViewChar,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELGameplayCamera_Statics::NewProp_OnlyViewCharSocket,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELGameplayCamera_Statics::NewProp_OnlyViewSec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELGameplayCamera_Statics::NewProp_ZoomDelaySubmissionEnd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELGameplayCamera_Statics::NewProp_ZoomSubTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELGameplayCamera_Statics::NewProp_UserAddPoints_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELGameplayCamera_Statics::NewProp_UserAddPoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELGameplayCamera_Statics::NewProp_UserOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELGameplayCamera_Statics::NewProp_bIncludeManagerCharacters_N,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELGameplayCamera_Statics::NewProp_ViewCharacters_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELGameplayCamera_Statics::NewProp_ViewCharacters,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELGameplayCamera_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELGameplayCamera>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELGameplayCamera_Statics::ClassParams = {
		&AELGameplayCamera::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AELGameplayCamera_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AELGameplayCamera_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AELGameplayCamera_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELGameplayCamera_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELGameplayCamera()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELGameplayCamera_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELGameplayCamera, 2325134357);
	template<> ABP_200508_API UClass* StaticClass<AELGameplayCamera>()
	{
		return AELGameplayCamera::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELGameplayCamera(Z_Construct_UClass_AELGameplayCamera, &AELGameplayCamera::StaticClass, TEXT("/Script/ABP_200508"), TEXT("AELGameplayCamera"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELGameplayCamera);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
