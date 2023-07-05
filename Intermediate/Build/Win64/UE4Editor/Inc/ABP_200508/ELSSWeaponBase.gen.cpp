// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSWeaponBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSWeaponBase() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_AELSSWeaponBase_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSWeaponBase();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSPickupBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent_NoRegister();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSWeaponParam();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSPlayer_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSWeaponUserDesignComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSWeaponType();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSWeaponCommonParam();
// End Cross Module References
	DEFINE_FUNCTION(AELSSWeaponBase::execFinishSticking)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FinishSticking();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSWeaponBase::execGetMesh)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMeshComponent**)Z_Param__Result=P_THIS->GetMesh();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSWeaponBase::execSetup)
	{
		P_GET_STRUCT_REF(FSSWeaponParam,Z_Param_Out_weaponParam);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Setup_Implementation(Z_Param_Out_weaponParam);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSWeaponBase::execStickToPlayer)
	{
		P_GET_OBJECT(AELSSPlayer,Z_Param_inTarget);
		P_GET_PROPERTY(FIntProperty,Z_Param_inRequiredStateId);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_inAttachParamRowName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->StickToPlayer(Z_Param_inTarget,Z_Param_inRequiredStateId,Z_Param_Out_inAttachParamRowName);
		P_NATIVE_END;
	}
	static FName NAME_AELSSWeaponBase_Setup = FName(TEXT("Setup"));
	void AELSSWeaponBase::Setup(FSSWeaponParam const& weaponParam)
	{
		ELSSWeaponBase_eventSetup_Parms Parms;
		Parms.weaponParam=weaponParam;
		ProcessEvent(FindFunctionChecked(NAME_AELSSWeaponBase_Setup),&Parms);
	}
	void AELSSWeaponBase::StaticRegisterNativesAELSSWeaponBase()
	{
		UClass* Class = AELSSWeaponBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FinishSticking", &AELSSWeaponBase::execFinishSticking },
			{ "GetMesh", &AELSSWeaponBase::execGetMesh },
			{ "Setup", &AELSSWeaponBase::execSetup },
			{ "StickToPlayer", &AELSSWeaponBase::execStickToPlayer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AELSSWeaponBase_FinishSticking_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWeaponBase_FinishSticking_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWeaponBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSWeaponBase_FinishSticking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSWeaponBase, nullptr, "FinishSticking", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSWeaponBase_FinishSticking_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWeaponBase_FinishSticking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSWeaponBase_FinishSticking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSWeaponBase_FinishSticking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSWeaponBase_GetMesh_Statics
	{
		struct ELSSWeaponBase_eventGetMesh_Parms
		{
			UMeshComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWeaponBase_GetMesh_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSWeaponBase_GetMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWeaponBase_eventGetMesh_Parms, ReturnValue), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AELSSWeaponBase_GetMesh_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWeaponBase_GetMesh_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSWeaponBase_GetMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWeaponBase_GetMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWeaponBase_GetMesh_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWeaponBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSWeaponBase_GetMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSWeaponBase, nullptr, "GetMesh", nullptr, nullptr, sizeof(ELSSWeaponBase_eventGetMesh_Parms), Z_Construct_UFunction_AELSSWeaponBase_GetMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWeaponBase_GetMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSWeaponBase_GetMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWeaponBase_GetMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSWeaponBase_GetMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSWeaponBase_GetMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSWeaponBase_Setup_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_weaponParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_weaponParam;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWeaponBase_Setup_Statics::NewProp_weaponParam_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSWeaponBase_Setup_Statics::NewProp_weaponParam = { "weaponParam", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWeaponBase_eventSetup_Parms, weaponParam), Z_Construct_UScriptStruct_FSSWeaponParam, METADATA_PARAMS(Z_Construct_UFunction_AELSSWeaponBase_Setup_Statics::NewProp_weaponParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWeaponBase_Setup_Statics::NewProp_weaponParam_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSWeaponBase_Setup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWeaponBase_Setup_Statics::NewProp_weaponParam,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWeaponBase_Setup_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWeaponBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSWeaponBase_Setup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSWeaponBase, nullptr, "Setup", nullptr, nullptr, sizeof(ELSSWeaponBase_eventSetup_Parms), Z_Construct_UFunction_AELSSWeaponBase_Setup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWeaponBase_Setup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSWeaponBase_Setup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWeaponBase_Setup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSWeaponBase_Setup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSWeaponBase_Setup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSWeaponBase_StickToPlayer_Statics
	{
		struct ELSSWeaponBase_eventStickToPlayer_Parms
		{
			AELSSPlayer* inTarget;
			int32 inRequiredStateId;
			FName inAttachParamRowName;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inTarget;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inRequiredStateId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inAttachParamRowName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_inAttachParamRowName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSWeaponBase_StickToPlayer_Statics::NewProp_inTarget = { "inTarget", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWeaponBase_eventStickToPlayer_Parms, inTarget), Z_Construct_UClass_AELSSPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSWeaponBase_StickToPlayer_Statics::NewProp_inRequiredStateId = { "inRequiredStateId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWeaponBase_eventStickToPlayer_Parms, inRequiredStateId), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWeaponBase_StickToPlayer_Statics::NewProp_inAttachParamRowName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AELSSWeaponBase_StickToPlayer_Statics::NewProp_inAttachParamRowName = { "inAttachParamRowName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWeaponBase_eventStickToPlayer_Parms, inAttachParamRowName), METADATA_PARAMS(Z_Construct_UFunction_AELSSWeaponBase_StickToPlayer_Statics::NewProp_inAttachParamRowName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWeaponBase_StickToPlayer_Statics::NewProp_inAttachParamRowName_MetaData)) };
	void Z_Construct_UFunction_AELSSWeaponBase_StickToPlayer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSWeaponBase_eventStickToPlayer_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSWeaponBase_StickToPlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSWeaponBase_eventStickToPlayer_Parms), &Z_Construct_UFunction_AELSSWeaponBase_StickToPlayer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSWeaponBase_StickToPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWeaponBase_StickToPlayer_Statics::NewProp_inTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWeaponBase_StickToPlayer_Statics::NewProp_inRequiredStateId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWeaponBase_StickToPlayer_Statics::NewProp_inAttachParamRowName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWeaponBase_StickToPlayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWeaponBase_StickToPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWeaponBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSWeaponBase_StickToPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSWeaponBase, nullptr, "StickToPlayer", nullptr, nullptr, sizeof(ELSSWeaponBase_eventStickToPlayer_Parms), Z_Construct_UFunction_AELSSWeaponBase_StickToPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWeaponBase_StickToPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSWeaponBase_StickToPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWeaponBase_StickToPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSWeaponBase_StickToPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSWeaponBase_StickToPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AELSSWeaponBase_NoRegister()
	{
		return AELSSWeaponBase::StaticClass();
	}
	struct Z_Construct_UClass_AELSSWeaponBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserDesignComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UserDesignComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkeletalMeshComponent;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WeaponType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_WeaponType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultMeshScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultMeshScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScaleWhenDrop_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScaleWhenDrop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultMeshRelativeLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultMeshRelativeLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshRelativeLocationOffsetWhenDrop_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MeshRelativeLocationOffsetWhenDrop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CommonParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CommonParam;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sticked_MetaData[];
#endif
		static void NewProp_Sticked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Sticked;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StickedPlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StickedPlayer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StickRequiredStateId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StickRequiredStateId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StickRequiredReactionName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_StickRequiredReactionName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StickFinishedVelocityXY_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StickFinishedVelocityXY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StickFinishedVelocityZ_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StickFinishedVelocityZ;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StickFinishedVelocityGravity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StickFinishedVelocityGravity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AELSSWeaponBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AELSSPickupBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AELSSWeaponBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AELSSWeaponBase_FinishSticking, "FinishSticking" }, // 1430389763
		{ &Z_Construct_UFunction_AELSSWeaponBase_GetMesh, "GetMesh" }, // 3807008740
		{ &Z_Construct_UFunction_AELSSWeaponBase_Setup, "Setup" }, // 810210487
		{ &Z_Construct_UFunction_AELSSWeaponBase_StickToPlayer, "StickToPlayer" }, // 1304645646
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWeaponBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSWeaponBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSWeaponBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWeaponBase_Statics::NewProp_UserDesignComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWeaponBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWeaponBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSWeaponBase_Statics::NewProp_UserDesignComponent = { "UserDesignComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSWeaponBase, UserDesignComponent), Z_Construct_UClass_UELSSWeaponUserDesignComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSWeaponBase_Statics::NewProp_UserDesignComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWeaponBase_Statics::NewProp_UserDesignComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWeaponBase_Statics::NewProp_SkeletalMeshComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWeaponBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWeaponBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSWeaponBase_Statics::NewProp_SkeletalMeshComponent = { "SkeletalMeshComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSWeaponBase, SkeletalMeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSWeaponBase_Statics::NewProp_SkeletalMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWeaponBase_Statics::NewProp_SkeletalMeshComponent_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AELSSWeaponBase_Statics::NewProp_WeaponType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWeaponBase_Statics::NewProp_WeaponType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWeaponBase" },
		{ "ModuleRelativePath", "Public/ELSSWeaponBase.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AELSSWeaponBase_Statics::NewProp_WeaponType = { "WeaponType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSWeaponBase, WeaponType), Z_Construct_UEnum_ABP_200508_ESSWeaponType, METADATA_PARAMS(Z_Construct_UClass_AELSSWeaponBase_Statics::NewProp_WeaponType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWeaponBase_Statics::NewProp_WeaponType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWeaponBase_Statics::NewProp_DefaultMeshScale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWeaponBase" },
		{ "ModuleRelativePath", "Public/ELSSWeaponBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELSSWeaponBase_Statics::NewProp_DefaultMeshScale = { "DefaultMeshScale", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSWeaponBase, DefaultMeshScale), METADATA_PARAMS(Z_Construct_UClass_AELSSWeaponBase_Statics::NewProp_DefaultMeshScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWeaponBase_Statics::NewProp_DefaultMeshScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWeaponBase_Statics::NewProp_ScaleWhenDrop_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWeaponBase" },
		{ "ModuleRelativePath", "Public/ELSSWeaponBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELSSWeaponBase_Statics::NewProp_ScaleWhenDrop = { "ScaleWhenDrop", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSWeaponBase, ScaleWhenDrop), METADATA_PARAMS(Z_Construct_UClass_AELSSWeaponBase_Statics::NewProp_ScaleWhenDrop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWeaponBase_Statics::NewProp_ScaleWhenDrop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWeaponBase_Statics::NewProp_DefaultMeshRelativeLocation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWeaponBase" },
		{ "ModuleRelativePath", "Public/ELSSWeaponBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AELSSWeaponBase_Statics::NewProp_DefaultMeshRelativeLocation = { "DefaultMeshRelativeLocation", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSWeaponBase, DefaultMeshRelativeLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AELSSWeaponBase_Statics::NewProp_DefaultMeshRelativeLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWeaponBase_Statics::NewProp_DefaultMeshRelativeLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWeaponBase_Statics::NewProp_MeshRelativeLocationOffsetWhenDrop_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWeaponBase" },
		{ "ModuleRelativePath", "Public/ELSSWeaponBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AELSSWeaponBase_Statics::NewProp_MeshRelativeLocationOffsetWhenDrop = { "MeshRelativeLocationOffsetWhenDrop", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSWeaponBase, MeshRelativeLocationOffsetWhenDrop), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AELSSWeaponBase_Statics::NewProp_MeshRelativeLocationOffsetWhenDrop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWeaponBase_Statics::NewProp_MeshRelativeLocationOffsetWhenDrop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWeaponBase_Statics::NewProp_CommonParam_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWeaponBase" },
		{ "ModuleRelativePath", "Public/ELSSWeaponBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AELSSWeaponBase_Statics::NewProp_CommonParam = { "CommonParam", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSWeaponBase, CommonParam), Z_Construct_UScriptStruct_FSSWeaponCommonParam, METADATA_PARAMS(Z_Construct_UClass_AELSSWeaponBase_Statics::NewProp_CommonParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWeaponBase_Statics::NewProp_CommonParam_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWeaponBase_Statics::NewProp_Sticked_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWeaponBase" },
		{ "ModuleRelativePath", "Public/ELSSWeaponBase.h" },
	};
#endif
	void Z_Construct_UClass_AELSSWeaponBase_Statics::NewProp_Sticked_SetBit(void* Obj)
	{
		((AELSSWeaponBase*)Obj)->Sticked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AELSSWeaponBase_Statics::NewProp_Sticked = { "Sticked", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AELSSWeaponBase), &Z_Construct_UClass_AELSSWeaponBase_Statics::NewProp_Sticked_SetBit, METADATA_PARAMS(Z_Construct_UClass_AELSSWeaponBase_Statics::NewProp_Sticked_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWeaponBase_Statics::NewProp_Sticked_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWeaponBase_Statics::NewProp_StickedPlayer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWeaponBase" },
		{ "ModuleRelativePath", "Public/ELSSWeaponBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSWeaponBase_Statics::NewProp_StickedPlayer = { "StickedPlayer", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSWeaponBase, StickedPlayer), Z_Construct_UClass_AELSSPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSWeaponBase_Statics::NewProp_StickedPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWeaponBase_Statics::NewProp_StickedPlayer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWeaponBase_Statics::NewProp_StickRequiredStateId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWeaponBase" },
		{ "ModuleRelativePath", "Public/ELSSWeaponBase.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AELSSWeaponBase_Statics::NewProp_StickRequiredStateId = { "StickRequiredStateId", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSWeaponBase, StickRequiredStateId), METADATA_PARAMS(Z_Construct_UClass_AELSSWeaponBase_Statics::NewProp_StickRequiredStateId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWeaponBase_Statics::NewProp_StickRequiredStateId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWeaponBase_Statics::NewProp_StickRequiredReactionName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWeaponBase" },
		{ "ModuleRelativePath", "Public/ELSSWeaponBase.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AELSSWeaponBase_Statics::NewProp_StickRequiredReactionName = { "StickRequiredReactionName", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSWeaponBase, StickRequiredReactionName), METADATA_PARAMS(Z_Construct_UClass_AELSSWeaponBase_Statics::NewProp_StickRequiredReactionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWeaponBase_Statics::NewProp_StickRequiredReactionName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWeaponBase_Statics::NewProp_StickFinishedVelocityXY_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWeaponBase" },
		{ "ModuleRelativePath", "Public/ELSSWeaponBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELSSWeaponBase_Statics::NewProp_StickFinishedVelocityXY = { "StickFinishedVelocityXY", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSWeaponBase, StickFinishedVelocityXY), METADATA_PARAMS(Z_Construct_UClass_AELSSWeaponBase_Statics::NewProp_StickFinishedVelocityXY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWeaponBase_Statics::NewProp_StickFinishedVelocityXY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWeaponBase_Statics::NewProp_StickFinishedVelocityZ_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWeaponBase" },
		{ "ModuleRelativePath", "Public/ELSSWeaponBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELSSWeaponBase_Statics::NewProp_StickFinishedVelocityZ = { "StickFinishedVelocityZ", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSWeaponBase, StickFinishedVelocityZ), METADATA_PARAMS(Z_Construct_UClass_AELSSWeaponBase_Statics::NewProp_StickFinishedVelocityZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWeaponBase_Statics::NewProp_StickFinishedVelocityZ_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWeaponBase_Statics::NewProp_StickFinishedVelocityGravity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWeaponBase" },
		{ "ModuleRelativePath", "Public/ELSSWeaponBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELSSWeaponBase_Statics::NewProp_StickFinishedVelocityGravity = { "StickFinishedVelocityGravity", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSWeaponBase, StickFinishedVelocityGravity), METADATA_PARAMS(Z_Construct_UClass_AELSSWeaponBase_Statics::NewProp_StickFinishedVelocityGravity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWeaponBase_Statics::NewProp_StickFinishedVelocityGravity_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AELSSWeaponBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWeaponBase_Statics::NewProp_UserDesignComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWeaponBase_Statics::NewProp_SkeletalMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWeaponBase_Statics::NewProp_WeaponType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWeaponBase_Statics::NewProp_WeaponType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWeaponBase_Statics::NewProp_DefaultMeshScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWeaponBase_Statics::NewProp_ScaleWhenDrop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWeaponBase_Statics::NewProp_DefaultMeshRelativeLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWeaponBase_Statics::NewProp_MeshRelativeLocationOffsetWhenDrop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWeaponBase_Statics::NewProp_CommonParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWeaponBase_Statics::NewProp_Sticked,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWeaponBase_Statics::NewProp_StickedPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWeaponBase_Statics::NewProp_StickRequiredStateId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWeaponBase_Statics::NewProp_StickRequiredReactionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWeaponBase_Statics::NewProp_StickFinishedVelocityXY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWeaponBase_Statics::NewProp_StickFinishedVelocityZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWeaponBase_Statics::NewProp_StickFinishedVelocityGravity,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELSSWeaponBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELSSWeaponBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELSSWeaponBase_Statics::ClassParams = {
		&AELSSWeaponBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AELSSWeaponBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWeaponBase_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AELSSWeaponBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWeaponBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELSSWeaponBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELSSWeaponBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELSSWeaponBase, 4257200764);
	template<> ABP_200508_API UClass* StaticClass<AELSSWeaponBase>()
	{
		return AELSSWeaponBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELSSWeaponBase(Z_Construct_UClass_AELSSWeaponBase, &AELSSWeaponBase::StaticClass, TEXT("/Script/ABP_200508"), TEXT("AELSSWeaponBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELSSWeaponBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
