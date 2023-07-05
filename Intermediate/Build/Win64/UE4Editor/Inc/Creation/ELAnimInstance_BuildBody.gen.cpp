// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Creation/Public/ELAnimInstance_BuildBody.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELAnimInstance_BuildBody() {}
// Cross Module References
	CREATION_API UClass* Z_Construct_UClass_UELAnimInstance_BuildBody_NoRegister();
	CREATION_API UClass* Z_Construct_UClass_UELAnimInstance_BuildBody();
	ELITE_CORE_API UClass* Z_Construct_UClass_UELAnimInstance();
	UPackage* Z_Construct_UPackage__Script_Creation();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FBuildBodyNodeTS();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	DEFINE_FUNCTION(UELAnimInstance_BuildBody::execOnUpdateParam)
	{
		P_GET_UBOOL(Z_Param_bForce);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnUpdateParam_Implementation(Z_Param_bForce);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELAnimInstance_BuildBody::execOnUpdateState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnUpdateState_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELAnimInstance_BuildBody::execPostInitProperties)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PostInitProperties();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELAnimInstance_BuildBody::execUpdateParam)
	{
		P_GET_UBOOL(Z_Param_bForce);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateParam(Z_Param_bForce);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELAnimInstance_BuildBody::execUpdateState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateState();
		P_NATIVE_END;
	}
	static FName NAME_UELAnimInstance_BuildBody_OnUpdateParam = FName(TEXT("OnUpdateParam"));
	void UELAnimInstance_BuildBody::OnUpdateParam(bool bForce)
	{
		ELAnimInstance_BuildBody_eventOnUpdateParam_Parms Parms;
		Parms.bForce=bForce ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UELAnimInstance_BuildBody_OnUpdateParam),&Parms);
	}
	static FName NAME_UELAnimInstance_BuildBody_OnUpdateState = FName(TEXT("OnUpdateState"));
	void UELAnimInstance_BuildBody::OnUpdateState()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELAnimInstance_BuildBody_OnUpdateState),NULL);
	}
	void UELAnimInstance_BuildBody::StaticRegisterNativesUELAnimInstance_BuildBody()
	{
		UClass* Class = UELAnimInstance_BuildBody::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnUpdateParam", &UELAnimInstance_BuildBody::execOnUpdateParam },
			{ "OnUpdateState", &UELAnimInstance_BuildBody::execOnUpdateState },
			{ "PostInitProperties", &UELAnimInstance_BuildBody::execPostInitProperties },
			{ "UpdateParam", &UELAnimInstance_BuildBody::execUpdateParam },
			{ "UpdateState", &UELAnimInstance_BuildBody::execUpdateState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELAnimInstance_BuildBody_OnUpdateParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bForce_MetaData[];
#endif
		static void NewProp_bForce_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForce;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELAnimInstance_BuildBody_OnUpdateParam_Statics::NewProp_bForce_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UELAnimInstance_BuildBody_OnUpdateParam_Statics::NewProp_bForce_SetBit(void* Obj)
	{
		((ELAnimInstance_BuildBody_eventOnUpdateParam_Parms*)Obj)->bForce = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELAnimInstance_BuildBody_OnUpdateParam_Statics::NewProp_bForce = { "bForce", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELAnimInstance_BuildBody_eventOnUpdateParam_Parms), &Z_Construct_UFunction_UELAnimInstance_BuildBody_OnUpdateParam_Statics::NewProp_bForce_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UELAnimInstance_BuildBody_OnUpdateParam_Statics::NewProp_bForce_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAnimInstance_BuildBody_OnUpdateParam_Statics::NewProp_bForce_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELAnimInstance_BuildBody_OnUpdateParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAnimInstance_BuildBody_OnUpdateParam_Statics::NewProp_bForce,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELAnimInstance_BuildBody_OnUpdateParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELAnimInstance_BuildBody.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELAnimInstance_BuildBody_OnUpdateParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELAnimInstance_BuildBody, nullptr, "OnUpdateParam", nullptr, nullptr, sizeof(ELAnimInstance_BuildBody_eventOnUpdateParam_Parms), Z_Construct_UFunction_UELAnimInstance_BuildBody_OnUpdateParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAnimInstance_BuildBody_OnUpdateParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELAnimInstance_BuildBody_OnUpdateParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAnimInstance_BuildBody_OnUpdateParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELAnimInstance_BuildBody_OnUpdateParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELAnimInstance_BuildBody_OnUpdateParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELAnimInstance_BuildBody_OnUpdateState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELAnimInstance_BuildBody_OnUpdateState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELAnimInstance_BuildBody.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELAnimInstance_BuildBody_OnUpdateState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELAnimInstance_BuildBody, nullptr, "OnUpdateState", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELAnimInstance_BuildBody_OnUpdateState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAnimInstance_BuildBody_OnUpdateState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELAnimInstance_BuildBody_OnUpdateState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELAnimInstance_BuildBody_OnUpdateState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELAnimInstance_BuildBody_PostInitProperties_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELAnimInstance_BuildBody_PostInitProperties_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELAnimInstance_BuildBody.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELAnimInstance_BuildBody_PostInitProperties_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELAnimInstance_BuildBody, nullptr, "PostInitProperties", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELAnimInstance_BuildBody_PostInitProperties_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAnimInstance_BuildBody_PostInitProperties_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELAnimInstance_BuildBody_PostInitProperties()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELAnimInstance_BuildBody_PostInitProperties_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELAnimInstance_BuildBody_UpdateParam_Statics
	{
		struct ELAnimInstance_BuildBody_eventUpdateParam_Parms
		{
			bool bForce;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bForce_MetaData[];
#endif
		static void NewProp_bForce_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForce;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELAnimInstance_BuildBody_UpdateParam_Statics::NewProp_bForce_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UELAnimInstance_BuildBody_UpdateParam_Statics::NewProp_bForce_SetBit(void* Obj)
	{
		((ELAnimInstance_BuildBody_eventUpdateParam_Parms*)Obj)->bForce = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELAnimInstance_BuildBody_UpdateParam_Statics::NewProp_bForce = { "bForce", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELAnimInstance_BuildBody_eventUpdateParam_Parms), &Z_Construct_UFunction_UELAnimInstance_BuildBody_UpdateParam_Statics::NewProp_bForce_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UELAnimInstance_BuildBody_UpdateParam_Statics::NewProp_bForce_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAnimInstance_BuildBody_UpdateParam_Statics::NewProp_bForce_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELAnimInstance_BuildBody_UpdateParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAnimInstance_BuildBody_UpdateParam_Statics::NewProp_bForce,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELAnimInstance_BuildBody_UpdateParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELAnimInstance_BuildBody.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELAnimInstance_BuildBody_UpdateParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELAnimInstance_BuildBody, nullptr, "UpdateParam", nullptr, nullptr, sizeof(ELAnimInstance_BuildBody_eventUpdateParam_Parms), Z_Construct_UFunction_UELAnimInstance_BuildBody_UpdateParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAnimInstance_BuildBody_UpdateParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELAnimInstance_BuildBody_UpdateParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAnimInstance_BuildBody_UpdateParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELAnimInstance_BuildBody_UpdateParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELAnimInstance_BuildBody_UpdateParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELAnimInstance_BuildBody_UpdateState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELAnimInstance_BuildBody_UpdateState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELAnimInstance_BuildBody.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELAnimInstance_BuildBody_UpdateState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELAnimInstance_BuildBody, nullptr, "UpdateState", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELAnimInstance_BuildBody_UpdateState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAnimInstance_BuildBody_UpdateState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELAnimInstance_BuildBody_UpdateState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELAnimInstance_BuildBody_UpdateState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELAnimInstance_BuildBody_NoRegister()
	{
		return UELAnimInstance_BuildBody::StaticClass();
	}
	struct Z_Construct_UClass_UELAnimInstance_BuildBody_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShouldUpdateParam_MetaData[];
#endif
		static void NewProp_bShouldUpdateParam_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldUpdateParam;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hips_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Hips;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Spine1_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Spine1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Spine2_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Spine2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Chest_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Chest;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Neck_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Neck;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShoulderL_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ShoulderL;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShoulderR_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ShoulderR;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Elbow_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Elbow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Knee_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Knee;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Leg_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Leg;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hips_NoFootWear_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Hips_NoFootWear;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HipCollision_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HipCollision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Spine1Collision_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Spine1Collision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Spine2Collision_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Spine2Collision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChestCollision_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ChestCollision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NeckCollision_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NeckCollision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShoulderLCollision_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ShoulderLCollision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShoulderRCollision_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ShoulderRCollision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LegLCollision_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LegLCollision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LegRCollision_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LegRCollision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hip_NoFootWearCollision_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Hip_NoFootWearCollision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActorScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableFixBone_MetaData[];
#endif
		static void NewProp_bEnableFixBone_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableFixBone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFixRootNode_MetaData[];
#endif
		static void NewProp_bFixRootNode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFixRootNode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FixRootNodeRatio_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FixRootNodeRatio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RootLocationOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RootLocationOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisableUpdate_MetaData[];
#endif
		static void NewProp_bDisableUpdate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisableUpdate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_Creation,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELAnimInstance_BuildBody_OnUpdateParam, "OnUpdateParam" }, // 1559473286
		{ &Z_Construct_UFunction_UELAnimInstance_BuildBody_OnUpdateState, "OnUpdateState" }, // 810187663
		{ &Z_Construct_UFunction_UELAnimInstance_BuildBody_PostInitProperties, "PostInitProperties" }, // 2689672852
		{ &Z_Construct_UFunction_UELAnimInstance_BuildBody_UpdateParam, "UpdateParam" }, // 3037899921
		{ &Z_Construct_UFunction_UELAnimInstance_BuildBody_UpdateState, "UpdateState" }, // 395360480
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "ELAnimInstance_BuildBody.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELAnimInstance_BuildBody.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::NewProp_bShouldUpdateParam_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELAnimInstance_BuildBody" },
		{ "ModuleRelativePath", "Public/ELAnimInstance_BuildBody.h" },
	};
#endif
	void Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::NewProp_bShouldUpdateParam_SetBit(void* Obj)
	{
		((UELAnimInstance_BuildBody*)Obj)->bShouldUpdateParam = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::NewProp_bShouldUpdateParam = { "bShouldUpdateParam", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELAnimInstance_BuildBody), &Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::NewProp_bShouldUpdateParam_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::NewProp_bShouldUpdateParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::NewProp_bShouldUpdateParam_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::NewProp_Hips_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELAnimInstance_BuildBody" },
		{ "ModuleRelativePath", "Public/ELAnimInstance_BuildBody.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::NewProp_Hips = { "Hips", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELAnimInstance_BuildBody, Hips), Z_Construct_UScriptStruct_FBuildBodyNodeTS, METADATA_PARAMS(Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::NewProp_Hips_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::NewProp_Hips_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::NewProp_Spine1_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELAnimInstance_BuildBody" },
		{ "ModuleRelativePath", "Public/ELAnimInstance_BuildBody.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::NewProp_Spine1 = { "Spine1", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELAnimInstance_BuildBody, Spine1), Z_Construct_UScriptStruct_FBuildBodyNodeTS, METADATA_PARAMS(Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::NewProp_Spine1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::NewProp_Spine1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::NewProp_Spine2_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELAnimInstance_BuildBody" },
		{ "ModuleRelativePath", "Public/ELAnimInstance_BuildBody.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::NewProp_Spine2 = { "Spine2", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELAnimInstance_BuildBody, Spine2), Z_Construct_UScriptStruct_FBuildBodyNodeTS, METADATA_PARAMS(Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::NewProp_Spine2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::NewProp_Spine2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::NewProp_Chest_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELAnimInstance_BuildBody" },
		{ "ModuleRelativePath", "Public/ELAnimInstance_BuildBody.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::NewProp_Chest = { "Chest", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELAnimInstance_BuildBody, Chest), Z_Construct_UScriptStruct_FBuildBodyNodeTS, METADATA_PARAMS(Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::NewProp_Chest_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::NewProp_Chest_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::NewProp_Neck_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELAnimInstance_BuildBody" },
		{ "ModuleRelativePath", "Public/ELAnimInstance_BuildBody.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::NewProp_Neck = { "Neck", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELAnimInstance_BuildBody, Neck), Z_Construct_UScriptStruct_FBuildBodyNodeTS, METADATA_PARAMS(Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::NewProp_Neck_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::NewProp_Neck_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::NewProp_ShoulderL_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELAnimInstance_BuildBody" },
		{ "ModuleRelativePath", "Public/ELAnimInstance_BuildBody.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::NewProp_ShoulderL = { "ShoulderL", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELAnimInstance_BuildBody, ShoulderL), Z_Construct_UScriptStruct_FBuildBodyNodeTS, METADATA_PARAMS(Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::NewProp_ShoulderL_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::NewProp_ShoulderL_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::NewProp_ShoulderR_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELAnimInstance_BuildBody" },
		{ "ModuleRelativePath", "Public/ELAnimInstance_BuildBody.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::NewProp_ShoulderR = { "ShoulderR", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELAnimInstance_BuildBody, ShoulderR), Z_Construct_UScriptStruct_FBuildBodyNodeTS, METADATA_PARAMS(Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::NewProp_ShoulderR_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::NewProp_ShoulderR_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::NewProp_Elbow_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELAnimInstance_BuildBody" },
		{ "ModuleRelativePath", "Public/ELAnimInstance_BuildBody.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::NewProp_Elbow = { "Elbow", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELAnimInstance_BuildBody, Elbow), Z_Construct_UScriptStruct_FBuildBodyNodeTS, METADATA_PARAMS(Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::NewProp_Elbow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::NewProp_Elbow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::NewProp_Knee_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELAnimInstance_BuildBody" },
		{ "ModuleRelativePath", "Public/ELAnimInstance_BuildBody.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::NewProp_Knee = { "Knee", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELAnimInstance_BuildBody, Knee), Z_Construct_UScriptStruct_FBuildBodyNodeTS, METADATA_PARAMS(Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::NewProp_Knee_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::NewProp_Knee_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::NewProp_Leg_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELAnimInstance_BuildBody" },
		{ "ModuleRelativePath", "Public/ELAnimInstance_BuildBody.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::NewProp_Leg = { "Leg", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELAnimInstance_BuildBody, Leg), Z_Construct_UScriptStruct_FBuildBodyNodeTS, METADATA_PARAMS(Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::NewProp_Leg_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::NewProp_Leg_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::NewProp_Hips_NoFootWear_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELAnimInstance_BuildBody" },
		{ "ModuleRelativePath", "Public/ELAnimInstance_BuildBody.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::NewProp_Hips_NoFootWear = { "Hips_NoFootWear", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELAnimInstance_BuildBody, Hips_NoFootWear), Z_Construct_UScriptStruct_FBuildBodyNodeTS, METADATA_PARAMS(Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::NewProp_Hips_NoFootWear_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::NewProp_Hips_NoFootWear_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::NewProp_HipCollision_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELAnimInstance_BuildBody" },
		{ "ModuleRelativePath", "Public/ELAnimInstance_BuildBody.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::NewProp_HipCollision = { "HipCollision", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELAnimInstance_BuildBody, HipCollision), Z_Construct_UScriptStruct_FBuildBodyNodeTS, METADATA_PARAMS(Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::NewProp_HipCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::NewProp_HipCollision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::NewProp_Spine1Collision_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELAnimInstance_BuildBody" },
		{ "ModuleRelativePath", "Public/ELAnimInstance_BuildBody.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::NewProp_Spine1Collision = { "Spine1Collision", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELAnimInstance_BuildBody, Spine1Collision), Z_Construct_UScriptStruct_FBuildBodyNodeTS, METADATA_PARAMS(Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::NewProp_Spine1Collision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::NewProp_Spine1Collision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::NewProp_Spine2Collision_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELAnimInstance_BuildBody" },
		{ "ModuleRelativePath", "Public/ELAnimInstance_BuildBody.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::NewProp_Spine2Collision = { "Spine2Collision", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELAnimInstance_BuildBody, Spine2Collision), Z_Construct_UScriptStruct_FBuildBodyNodeTS, METADATA_PARAMS(Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::NewProp_Spine2Collision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::NewProp_Spine2Collision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::NewProp_ChestCollision_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELAnimInstance_BuildBody" },
		{ "ModuleRelativePath", "Public/ELAnimInstance_BuildBody.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::NewProp_ChestCollision = { "ChestCollision", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELAnimInstance_BuildBody, ChestCollision), Z_Construct_UScriptStruct_FBuildBodyNodeTS, METADATA_PARAMS(Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::NewProp_ChestCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::NewProp_ChestCollision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::NewProp_NeckCollision_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELAnimInstance_BuildBody" },
		{ "ModuleRelativePath", "Public/ELAnimInstance_BuildBody.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::NewProp_NeckCollision = { "NeckCollision", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELAnimInstance_BuildBody, NeckCollision), Z_Construct_UScriptStruct_FBuildBodyNodeTS, METADATA_PARAMS(Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::NewProp_NeckCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::NewProp_NeckCollision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::NewProp_ShoulderLCollision_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELAnimInstance_BuildBody" },
		{ "ModuleRelativePath", "Public/ELAnimInstance_BuildBody.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::NewProp_ShoulderLCollision = { "ShoulderLCollision", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELAnimInstance_BuildBody, ShoulderLCollision), Z_Construct_UScriptStruct_FBuildBodyNodeTS, METADATA_PARAMS(Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::NewProp_ShoulderLCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::NewProp_ShoulderLCollision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::NewProp_ShoulderRCollision_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELAnimInstance_BuildBody" },
		{ "ModuleRelativePath", "Public/ELAnimInstance_BuildBody.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::NewProp_ShoulderRCollision = { "ShoulderRCollision", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELAnimInstance_BuildBody, ShoulderRCollision), Z_Construct_UScriptStruct_FBuildBodyNodeTS, METADATA_PARAMS(Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::NewProp_ShoulderRCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::NewProp_ShoulderRCollision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::NewProp_LegLCollision_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELAnimInstance_BuildBody" },
		{ "ModuleRelativePath", "Public/ELAnimInstance_BuildBody.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::NewProp_LegLCollision = { "LegLCollision", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELAnimInstance_BuildBody, LegLCollision), Z_Construct_UScriptStruct_FBuildBodyNodeTS, METADATA_PARAMS(Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::NewProp_LegLCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::NewProp_LegLCollision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::NewProp_LegRCollision_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELAnimInstance_BuildBody" },
		{ "ModuleRelativePath", "Public/ELAnimInstance_BuildBody.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::NewProp_LegRCollision = { "LegRCollision", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELAnimInstance_BuildBody, LegRCollision), Z_Construct_UScriptStruct_FBuildBodyNodeTS, METADATA_PARAMS(Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::NewProp_LegRCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::NewProp_LegRCollision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::NewProp_Hip_NoFootWearCollision_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELAnimInstance_BuildBody" },
		{ "ModuleRelativePath", "Public/ELAnimInstance_BuildBody.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::NewProp_Hip_NoFootWearCollision = { "Hip_NoFootWearCollision", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELAnimInstance_BuildBody, Hip_NoFootWearCollision), Z_Construct_UScriptStruct_FBuildBodyNodeTS, METADATA_PARAMS(Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::NewProp_Hip_NoFootWearCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::NewProp_Hip_NoFootWearCollision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::NewProp_ActorScale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELAnimInstance_BuildBody" },
		{ "ModuleRelativePath", "Public/ELAnimInstance_BuildBody.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::NewProp_ActorScale = { "ActorScale", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELAnimInstance_BuildBody, ActorScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::NewProp_ActorScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::NewProp_ActorScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::NewProp_bEnableFixBone_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELAnimInstance_BuildBody" },
		{ "ModuleRelativePath", "Public/ELAnimInstance_BuildBody.h" },
	};
#endif
	void Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::NewProp_bEnableFixBone_SetBit(void* Obj)
	{
		((UELAnimInstance_BuildBody*)Obj)->bEnableFixBone = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::NewProp_bEnableFixBone = { "bEnableFixBone", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELAnimInstance_BuildBody), &Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::NewProp_bEnableFixBone_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::NewProp_bEnableFixBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::NewProp_bEnableFixBone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::NewProp_bFixRootNode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELAnimInstance_BuildBody" },
		{ "ModuleRelativePath", "Public/ELAnimInstance_BuildBody.h" },
	};
#endif
	void Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::NewProp_bFixRootNode_SetBit(void* Obj)
	{
		((UELAnimInstance_BuildBody*)Obj)->bFixRootNode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::NewProp_bFixRootNode = { "bFixRootNode", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELAnimInstance_BuildBody), &Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::NewProp_bFixRootNode_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::NewProp_bFixRootNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::NewProp_bFixRootNode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::NewProp_FixRootNodeRatio_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELAnimInstance_BuildBody" },
		{ "ModuleRelativePath", "Public/ELAnimInstance_BuildBody.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::NewProp_FixRootNodeRatio = { "FixRootNodeRatio", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELAnimInstance_BuildBody, FixRootNodeRatio), METADATA_PARAMS(Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::NewProp_FixRootNodeRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::NewProp_FixRootNodeRatio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::NewProp_RootLocationOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELAnimInstance_BuildBody" },
		{ "ModuleRelativePath", "Public/ELAnimInstance_BuildBody.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::NewProp_RootLocationOffset = { "RootLocationOffset", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELAnimInstance_BuildBody, RootLocationOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::NewProp_RootLocationOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::NewProp_RootLocationOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::NewProp_bDisableUpdate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELAnimInstance_BuildBody" },
		{ "ModuleRelativePath", "Public/ELAnimInstance_BuildBody.h" },
	};
#endif
	void Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::NewProp_bDisableUpdate_SetBit(void* Obj)
	{
		((UELAnimInstance_BuildBody*)Obj)->bDisableUpdate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::NewProp_bDisableUpdate = { "bDisableUpdate", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELAnimInstance_BuildBody), &Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::NewProp_bDisableUpdate_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::NewProp_bDisableUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::NewProp_bDisableUpdate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::NewProp_bShouldUpdateParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::NewProp_Hips,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::NewProp_Spine1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::NewProp_Spine2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::NewProp_Chest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::NewProp_Neck,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::NewProp_ShoulderL,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::NewProp_ShoulderR,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::NewProp_Elbow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::NewProp_Knee,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::NewProp_Leg,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::NewProp_Hips_NoFootWear,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::NewProp_HipCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::NewProp_Spine1Collision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::NewProp_Spine2Collision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::NewProp_ChestCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::NewProp_NeckCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::NewProp_ShoulderLCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::NewProp_ShoulderRCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::NewProp_LegLCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::NewProp_LegRCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::NewProp_Hip_NoFootWearCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::NewProp_ActorScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::NewProp_bEnableFixBone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::NewProp_bFixRootNode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::NewProp_FixRootNodeRatio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::NewProp_RootLocationOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::NewProp_bDisableUpdate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELAnimInstance_BuildBody>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::ClassParams = {
		&UELAnimInstance_BuildBody::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELAnimInstance_BuildBody()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELAnimInstance_BuildBody_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELAnimInstance_BuildBody, 2996621921);
	template<> CREATION_API UClass* StaticClass<UELAnimInstance_BuildBody>()
	{
		return UELAnimInstance_BuildBody::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELAnimInstance_BuildBody(Z_Construct_UClass_UELAnimInstance_BuildBody, &UELAnimInstance_BuildBody::StaticClass, TEXT("/Script/Creation"), TEXT("UELAnimInstance_BuildBody"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELAnimInstance_BuildBody);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
