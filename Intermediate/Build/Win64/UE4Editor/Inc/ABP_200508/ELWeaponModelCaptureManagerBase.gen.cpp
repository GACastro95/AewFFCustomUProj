// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELWeaponModelCaptureManagerBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELWeaponModelCaptureManagerBase() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_AELWeaponModelCaptureManagerBase_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELWeaponModelCaptureManagerBase();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
// End Cross Module References
	static FName NAME_AELWeaponModelCaptureManagerBase_OnAttachWeaponDecal = FName(TEXT("OnAttachWeaponDecal"));
	void AELWeaponModelCaptureManagerBase::OnAttachWeaponDecal(FLinearColor const& InColor, UTexture* InTexture, UTexture* InSymbolTexture)
	{
		ELWeaponModelCaptureManagerBase_eventOnAttachWeaponDecal_Parms Parms;
		Parms.InColor=InColor;
		Parms.InTexture=InTexture;
		Parms.InSymbolTexture=InSymbolTexture;
		ProcessEvent(FindFunctionChecked(NAME_AELWeaponModelCaptureManagerBase_OnAttachWeaponDecal),&Parms);
	}
	static FName NAME_AELWeaponModelCaptureManagerBase_OnChangeValidSceneCapture = FName(TEXT("OnChangeValidSceneCapture"));
	void AELWeaponModelCaptureManagerBase::OnChangeValidSceneCapture(bool IsValid)
	{
		ELWeaponModelCaptureManagerBase_eventOnChangeValidSceneCapture_Parms Parms;
		Parms.IsValid=IsValid ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AELWeaponModelCaptureManagerBase_OnChangeValidSceneCapture),&Parms);
	}
	static FName NAME_AELWeaponModelCaptureManagerBase_OnCreateWeaponModel = FName(TEXT("OnCreateWeaponModel"));
	void AELWeaponModelCaptureManagerBase::OnCreateWeaponModel(int32 inWeaponId, bool InIsSSWeapon, FTransform const& InTransform)
	{
		ELWeaponModelCaptureManagerBase_eventOnCreateWeaponModel_Parms Parms;
		Parms.inWeaponId=inWeaponId;
		Parms.InIsSSWeapon=InIsSSWeapon ? true : false;
		Parms.InTransform=InTransform;
		ProcessEvent(FindFunctionChecked(NAME_AELWeaponModelCaptureManagerBase_OnCreateWeaponModel),&Parms);
	}
	static FName NAME_AELWeaponModelCaptureManagerBase_OnDestroyWeaponModel = FName(TEXT("OnDestroyWeaponModel"));
	void AELWeaponModelCaptureManagerBase::OnDestroyWeaponModel()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELWeaponModelCaptureManagerBase_OnDestroyWeaponModel),NULL);
	}
	static FName NAME_AELWeaponModelCaptureManagerBase_OnForceRecreateDebugWeapon = FName(TEXT("OnForceRecreateDebugWeapon"));
	void AELWeaponModelCaptureManagerBase::OnForceRecreateDebugWeapon(FTransform const& OffsetTransform)
	{
		ELWeaponModelCaptureManagerBase_eventOnForceRecreateDebugWeapon_Parms Parms;
		Parms.OffsetTransform=OffsetTransform;
		ProcessEvent(FindFunctionChecked(NAME_AELWeaponModelCaptureManagerBase_OnForceRecreateDebugWeapon),&Parms);
	}
	static FName NAME_AELWeaponModelCaptureManagerBase_OnResetWeaponDecal = FName(TEXT("OnResetWeaponDecal"));
	void AELWeaponModelCaptureManagerBase::OnResetWeaponDecal()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELWeaponModelCaptureManagerBase_OnResetWeaponDecal),NULL);
	}
	static FName NAME_AELWeaponModelCaptureManagerBase_OnRotaionWeaponModel = FName(TEXT("OnRotaionWeaponModel"));
	void AELWeaponModelCaptureManagerBase::OnRotaionWeaponModel(float AddRotaion)
	{
		ELWeaponModelCaptureManagerBase_eventOnRotaionWeaponModel_Parms Parms;
		Parms.AddRotaion=AddRotaion;
		ProcessEvent(FindFunctionChecked(NAME_AELWeaponModelCaptureManagerBase_OnRotaionWeaponModel),&Parms);
	}
	void AELWeaponModelCaptureManagerBase::StaticRegisterNativesAELWeaponModelCaptureManagerBase()
	{
	}
	struct Z_Construct_UFunction_AELWeaponModelCaptureManagerBase_OnAttachWeaponDecal_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InColor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InTexture;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InSymbolTexture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELWeaponModelCaptureManagerBase_OnAttachWeaponDecal_Statics::NewProp_InColor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELWeaponModelCaptureManagerBase_OnAttachWeaponDecal_Statics::NewProp_InColor = { "InColor", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELWeaponModelCaptureManagerBase_eventOnAttachWeaponDecal_Parms, InColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UFunction_AELWeaponModelCaptureManagerBase_OnAttachWeaponDecal_Statics::NewProp_InColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELWeaponModelCaptureManagerBase_OnAttachWeaponDecal_Statics::NewProp_InColor_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELWeaponModelCaptureManagerBase_OnAttachWeaponDecal_Statics::NewProp_InTexture = { "InTexture", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELWeaponModelCaptureManagerBase_eventOnAttachWeaponDecal_Parms, InTexture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELWeaponModelCaptureManagerBase_OnAttachWeaponDecal_Statics::NewProp_InSymbolTexture = { "InSymbolTexture", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELWeaponModelCaptureManagerBase_eventOnAttachWeaponDecal_Parms, InSymbolTexture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELWeaponModelCaptureManagerBase_OnAttachWeaponDecal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELWeaponModelCaptureManagerBase_OnAttachWeaponDecal_Statics::NewProp_InColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELWeaponModelCaptureManagerBase_OnAttachWeaponDecal_Statics::NewProp_InTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELWeaponModelCaptureManagerBase_OnAttachWeaponDecal_Statics::NewProp_InSymbolTexture,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELWeaponModelCaptureManagerBase_OnAttachWeaponDecal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELWeaponModelCaptureManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELWeaponModelCaptureManagerBase_OnAttachWeaponDecal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELWeaponModelCaptureManagerBase, nullptr, "OnAttachWeaponDecal", nullptr, nullptr, sizeof(ELWeaponModelCaptureManagerBase_eventOnAttachWeaponDecal_Parms), Z_Construct_UFunction_AELWeaponModelCaptureManagerBase_OnAttachWeaponDecal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELWeaponModelCaptureManagerBase_OnAttachWeaponDecal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0CC20800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELWeaponModelCaptureManagerBase_OnAttachWeaponDecal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELWeaponModelCaptureManagerBase_OnAttachWeaponDecal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELWeaponModelCaptureManagerBase_OnAttachWeaponDecal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELWeaponModelCaptureManagerBase_OnAttachWeaponDecal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELWeaponModelCaptureManagerBase_OnChangeValidSceneCapture_Statics
	{
		static void NewProp_IsValid_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsValid;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELWeaponModelCaptureManagerBase_OnChangeValidSceneCapture_Statics::NewProp_IsValid_SetBit(void* Obj)
	{
		((ELWeaponModelCaptureManagerBase_eventOnChangeValidSceneCapture_Parms*)Obj)->IsValid = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELWeaponModelCaptureManagerBase_OnChangeValidSceneCapture_Statics::NewProp_IsValid = { "IsValid", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELWeaponModelCaptureManagerBase_eventOnChangeValidSceneCapture_Parms), &Z_Construct_UFunction_AELWeaponModelCaptureManagerBase_OnChangeValidSceneCapture_Statics::NewProp_IsValid_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELWeaponModelCaptureManagerBase_OnChangeValidSceneCapture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELWeaponModelCaptureManagerBase_OnChangeValidSceneCapture_Statics::NewProp_IsValid,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELWeaponModelCaptureManagerBase_OnChangeValidSceneCapture_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELWeaponModelCaptureManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELWeaponModelCaptureManagerBase_OnChangeValidSceneCapture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELWeaponModelCaptureManagerBase, nullptr, "OnChangeValidSceneCapture", nullptr, nullptr, sizeof(ELWeaponModelCaptureManagerBase_eventOnChangeValidSceneCapture_Parms), Z_Construct_UFunction_AELWeaponModelCaptureManagerBase_OnChangeValidSceneCapture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELWeaponModelCaptureManagerBase_OnChangeValidSceneCapture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELWeaponModelCaptureManagerBase_OnChangeValidSceneCapture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELWeaponModelCaptureManagerBase_OnChangeValidSceneCapture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELWeaponModelCaptureManagerBase_OnChangeValidSceneCapture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELWeaponModelCaptureManagerBase_OnChangeValidSceneCapture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELWeaponModelCaptureManagerBase_OnCreateWeaponModel_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inWeaponId;
		static void NewProp_InIsSSWeapon_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InIsSSWeapon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InTransform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELWeaponModelCaptureManagerBase_OnCreateWeaponModel_Statics::NewProp_inWeaponId = { "inWeaponId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELWeaponModelCaptureManagerBase_eventOnCreateWeaponModel_Parms, inWeaponId), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELWeaponModelCaptureManagerBase_OnCreateWeaponModel_Statics::NewProp_InIsSSWeapon_SetBit(void* Obj)
	{
		((ELWeaponModelCaptureManagerBase_eventOnCreateWeaponModel_Parms*)Obj)->InIsSSWeapon = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELWeaponModelCaptureManagerBase_OnCreateWeaponModel_Statics::NewProp_InIsSSWeapon = { "InIsSSWeapon", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELWeaponModelCaptureManagerBase_eventOnCreateWeaponModel_Parms), &Z_Construct_UFunction_AELWeaponModelCaptureManagerBase_OnCreateWeaponModel_Statics::NewProp_InIsSSWeapon_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELWeaponModelCaptureManagerBase_OnCreateWeaponModel_Statics::NewProp_InTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELWeaponModelCaptureManagerBase_OnCreateWeaponModel_Statics::NewProp_InTransform = { "InTransform", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELWeaponModelCaptureManagerBase_eventOnCreateWeaponModel_Parms, InTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_AELWeaponModelCaptureManagerBase_OnCreateWeaponModel_Statics::NewProp_InTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELWeaponModelCaptureManagerBase_OnCreateWeaponModel_Statics::NewProp_InTransform_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELWeaponModelCaptureManagerBase_OnCreateWeaponModel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELWeaponModelCaptureManagerBase_OnCreateWeaponModel_Statics::NewProp_inWeaponId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELWeaponModelCaptureManagerBase_OnCreateWeaponModel_Statics::NewProp_InIsSSWeapon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELWeaponModelCaptureManagerBase_OnCreateWeaponModel_Statics::NewProp_InTransform,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELWeaponModelCaptureManagerBase_OnCreateWeaponModel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELWeaponModelCaptureManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELWeaponModelCaptureManagerBase_OnCreateWeaponModel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELWeaponModelCaptureManagerBase, nullptr, "OnCreateWeaponModel", nullptr, nullptr, sizeof(ELWeaponModelCaptureManagerBase_eventOnCreateWeaponModel_Parms), Z_Construct_UFunction_AELWeaponModelCaptureManagerBase_OnCreateWeaponModel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELWeaponModelCaptureManagerBase_OnCreateWeaponModel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0CC20800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELWeaponModelCaptureManagerBase_OnCreateWeaponModel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELWeaponModelCaptureManagerBase_OnCreateWeaponModel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELWeaponModelCaptureManagerBase_OnCreateWeaponModel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELWeaponModelCaptureManagerBase_OnCreateWeaponModel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELWeaponModelCaptureManagerBase_OnDestroyWeaponModel_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELWeaponModelCaptureManagerBase_OnDestroyWeaponModel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELWeaponModelCaptureManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELWeaponModelCaptureManagerBase_OnDestroyWeaponModel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELWeaponModelCaptureManagerBase, nullptr, "OnDestroyWeaponModel", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELWeaponModelCaptureManagerBase_OnDestroyWeaponModel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELWeaponModelCaptureManagerBase_OnDestroyWeaponModel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELWeaponModelCaptureManagerBase_OnDestroyWeaponModel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELWeaponModelCaptureManagerBase_OnDestroyWeaponModel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELWeaponModelCaptureManagerBase_OnForceRecreateDebugWeapon_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OffsetTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OffsetTransform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELWeaponModelCaptureManagerBase_OnForceRecreateDebugWeapon_Statics::NewProp_OffsetTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELWeaponModelCaptureManagerBase_OnForceRecreateDebugWeapon_Statics::NewProp_OffsetTransform = { "OffsetTransform", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELWeaponModelCaptureManagerBase_eventOnForceRecreateDebugWeapon_Parms, OffsetTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_AELWeaponModelCaptureManagerBase_OnForceRecreateDebugWeapon_Statics::NewProp_OffsetTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELWeaponModelCaptureManagerBase_OnForceRecreateDebugWeapon_Statics::NewProp_OffsetTransform_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELWeaponModelCaptureManagerBase_OnForceRecreateDebugWeapon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELWeaponModelCaptureManagerBase_OnForceRecreateDebugWeapon_Statics::NewProp_OffsetTransform,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELWeaponModelCaptureManagerBase_OnForceRecreateDebugWeapon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELWeaponModelCaptureManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELWeaponModelCaptureManagerBase_OnForceRecreateDebugWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELWeaponModelCaptureManagerBase, nullptr, "OnForceRecreateDebugWeapon", nullptr, nullptr, sizeof(ELWeaponModelCaptureManagerBase_eventOnForceRecreateDebugWeapon_Parms), Z_Construct_UFunction_AELWeaponModelCaptureManagerBase_OnForceRecreateDebugWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELWeaponModelCaptureManagerBase_OnForceRecreateDebugWeapon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0CC20800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELWeaponModelCaptureManagerBase_OnForceRecreateDebugWeapon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELWeaponModelCaptureManagerBase_OnForceRecreateDebugWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELWeaponModelCaptureManagerBase_OnForceRecreateDebugWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELWeaponModelCaptureManagerBase_OnForceRecreateDebugWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELWeaponModelCaptureManagerBase_OnResetWeaponDecal_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELWeaponModelCaptureManagerBase_OnResetWeaponDecal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELWeaponModelCaptureManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELWeaponModelCaptureManagerBase_OnResetWeaponDecal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELWeaponModelCaptureManagerBase, nullptr, "OnResetWeaponDecal", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELWeaponModelCaptureManagerBase_OnResetWeaponDecal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELWeaponModelCaptureManagerBase_OnResetWeaponDecal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELWeaponModelCaptureManagerBase_OnResetWeaponDecal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELWeaponModelCaptureManagerBase_OnResetWeaponDecal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELWeaponModelCaptureManagerBase_OnRotaionWeaponModel_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AddRotaion;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELWeaponModelCaptureManagerBase_OnRotaionWeaponModel_Statics::NewProp_AddRotaion = { "AddRotaion", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELWeaponModelCaptureManagerBase_eventOnRotaionWeaponModel_Parms, AddRotaion), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELWeaponModelCaptureManagerBase_OnRotaionWeaponModel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELWeaponModelCaptureManagerBase_OnRotaionWeaponModel_Statics::NewProp_AddRotaion,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELWeaponModelCaptureManagerBase_OnRotaionWeaponModel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELWeaponModelCaptureManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELWeaponModelCaptureManagerBase_OnRotaionWeaponModel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELWeaponModelCaptureManagerBase, nullptr, "OnRotaionWeaponModel", nullptr, nullptr, sizeof(ELWeaponModelCaptureManagerBase_eventOnRotaionWeaponModel_Parms), Z_Construct_UFunction_AELWeaponModelCaptureManagerBase_OnRotaionWeaponModel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELWeaponModelCaptureManagerBase_OnRotaionWeaponModel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELWeaponModelCaptureManagerBase_OnRotaionWeaponModel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELWeaponModelCaptureManagerBase_OnRotaionWeaponModel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELWeaponModelCaptureManagerBase_OnRotaionWeaponModel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELWeaponModelCaptureManagerBase_OnRotaionWeaponModel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AELWeaponModelCaptureManagerBase_NoRegister()
	{
		return AELWeaponModelCaptureManagerBase::StaticClass();
	}
	struct Z_Construct_UClass_AELWeaponModelCaptureManagerBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AELWeaponModelCaptureManagerBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AELWeaponModelCaptureManagerBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AELWeaponModelCaptureManagerBase_OnAttachWeaponDecal, "OnAttachWeaponDecal" }, // 936692570
		{ &Z_Construct_UFunction_AELWeaponModelCaptureManagerBase_OnChangeValidSceneCapture, "OnChangeValidSceneCapture" }, // 598921626
		{ &Z_Construct_UFunction_AELWeaponModelCaptureManagerBase_OnCreateWeaponModel, "OnCreateWeaponModel" }, // 2400319202
		{ &Z_Construct_UFunction_AELWeaponModelCaptureManagerBase_OnDestroyWeaponModel, "OnDestroyWeaponModel" }, // 1824255889
		{ &Z_Construct_UFunction_AELWeaponModelCaptureManagerBase_OnForceRecreateDebugWeapon, "OnForceRecreateDebugWeapon" }, // 1293512917
		{ &Z_Construct_UFunction_AELWeaponModelCaptureManagerBase_OnResetWeaponDecal, "OnResetWeaponDecal" }, // 1955496526
		{ &Z_Construct_UFunction_AELWeaponModelCaptureManagerBase_OnRotaionWeaponModel, "OnRotaionWeaponModel" }, // 2271694819
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELWeaponModelCaptureManagerBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELWeaponModelCaptureManagerBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELWeaponModelCaptureManagerBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELWeaponModelCaptureManagerBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELWeaponModelCaptureManagerBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELWeaponModelCaptureManagerBase_Statics::ClassParams = {
		&AELWeaponModelCaptureManagerBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AELWeaponModelCaptureManagerBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELWeaponModelCaptureManagerBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELWeaponModelCaptureManagerBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELWeaponModelCaptureManagerBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELWeaponModelCaptureManagerBase, 328074383);
	template<> ABP_200508_API UClass* StaticClass<AELWeaponModelCaptureManagerBase>()
	{
		return AELWeaponModelCaptureManagerBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELWeaponModelCaptureManagerBase(Z_Construct_UClass_AELWeaponModelCaptureManagerBase, &AELWeaponModelCaptureManagerBase::StaticClass, TEXT("/Script/ABP_200508"), TEXT("AELWeaponModelCaptureManagerBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELWeaponModelCaptureManagerBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
