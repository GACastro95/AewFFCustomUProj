// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELEntranceCutsceneWeaponBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELEntranceCutsceneWeaponBase() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_AELEntranceCutsceneWeaponBase_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELEntranceCutsceneWeaponBase();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AELEntranceCutsceneWeaponBase::execSetMesh)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh);
		P_GET_OBJECT(USkeletalMesh,Z_Param_SkeletalMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMesh(Z_Param_StaticMesh,Z_Param_SkeletalMesh);
		P_NATIVE_END;
	}
	static FName NAME_AELEntranceCutsceneWeaponBase_Setup = FName(TEXT("Setup"));
	void AELEntranceCutsceneWeaponBase::Setup(int32 InWeaponNo)
	{
		ELEntranceCutsceneWeaponBase_eventSetup_Parms Parms;
		Parms.InWeaponNo=InWeaponNo;
		ProcessEvent(FindFunctionChecked(NAME_AELEntranceCutsceneWeaponBase_Setup),&Parms);
	}
	void AELEntranceCutsceneWeaponBase::StaticRegisterNativesAELEntranceCutsceneWeaponBase()
	{
		UClass* Class = AELEntranceCutsceneWeaponBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetMesh", &AELEntranceCutsceneWeaponBase::execSetMesh },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AELEntranceCutsceneWeaponBase_SetMesh_Statics
	{
		struct ELEntranceCutsceneWeaponBase_eventSetMesh_Parms
		{
			UStaticMesh* StaticMesh;
			USkeletalMesh* SkeletalMesh;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkeletalMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELEntranceCutsceneWeaponBase_SetMesh_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEntranceCutsceneWeaponBase_eventSetMesh_Parms, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELEntranceCutsceneWeaponBase_SetMesh_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEntranceCutsceneWeaponBase_eventSetMesh_Parms, SkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELEntranceCutsceneWeaponBase_SetMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELEntranceCutsceneWeaponBase_SetMesh_Statics::NewProp_StaticMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELEntranceCutsceneWeaponBase_SetMesh_Statics::NewProp_SkeletalMesh,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELEntranceCutsceneWeaponBase_SetMesh_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneWeaponBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELEntranceCutsceneWeaponBase_SetMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELEntranceCutsceneWeaponBase, nullptr, "SetMesh", nullptr, nullptr, sizeof(ELEntranceCutsceneWeaponBase_eventSetMesh_Parms), Z_Construct_UFunction_AELEntranceCutsceneWeaponBase_SetMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELEntranceCutsceneWeaponBase_SetMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELEntranceCutsceneWeaponBase_SetMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELEntranceCutsceneWeaponBase_SetMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELEntranceCutsceneWeaponBase_SetMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELEntranceCutsceneWeaponBase_SetMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELEntranceCutsceneWeaponBase_Setup_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InWeaponNo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELEntranceCutsceneWeaponBase_Setup_Statics::NewProp_InWeaponNo = { "InWeaponNo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEntranceCutsceneWeaponBase_eventSetup_Parms, InWeaponNo), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELEntranceCutsceneWeaponBase_Setup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELEntranceCutsceneWeaponBase_Setup_Statics::NewProp_InWeaponNo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELEntranceCutsceneWeaponBase_Setup_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneWeaponBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELEntranceCutsceneWeaponBase_Setup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELEntranceCutsceneWeaponBase, nullptr, "Setup", nullptr, nullptr, sizeof(ELEntranceCutsceneWeaponBase_eventSetup_Parms), Z_Construct_UFunction_AELEntranceCutsceneWeaponBase_Setup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELEntranceCutsceneWeaponBase_Setup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELEntranceCutsceneWeaponBase_Setup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELEntranceCutsceneWeaponBase_Setup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELEntranceCutsceneWeaponBase_Setup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELEntranceCutsceneWeaponBase_Setup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AELEntranceCutsceneWeaponBase_NoRegister()
	{
		return AELEntranceCutsceneWeaponBase::StaticClass();
	}
	struct Z_Construct_UClass_AELEntranceCutsceneWeaponBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponNo_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_WeaponNo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnimMontage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AELEntranceCutsceneWeaponBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AELEntranceCutsceneWeaponBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AELEntranceCutsceneWeaponBase_SetMesh, "SetMesh" }, // 1331338749
		{ &Z_Construct_UFunction_AELEntranceCutsceneWeaponBase_Setup, "Setup" }, // 743836598
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELEntranceCutsceneWeaponBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELEntranceCutsceneWeaponBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneWeaponBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELEntranceCutsceneWeaponBase_Statics::NewProp_WeaponNo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEntranceCutsceneWeaponBase" },
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneWeaponBase.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AELEntranceCutsceneWeaponBase_Statics::NewProp_WeaponNo = { "WeaponNo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELEntranceCutsceneWeaponBase, WeaponNo), METADATA_PARAMS(Z_Construct_UClass_AELEntranceCutsceneWeaponBase_Statics::NewProp_WeaponNo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELEntranceCutsceneWeaponBase_Statics::NewProp_WeaponNo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELEntranceCutsceneWeaponBase_Statics::NewProp_AnimMontage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEntranceCutsceneWeaponBase" },
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneWeaponBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELEntranceCutsceneWeaponBase_Statics::NewProp_AnimMontage = { "AnimMontage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELEntranceCutsceneWeaponBase, AnimMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELEntranceCutsceneWeaponBase_Statics::NewProp_AnimMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELEntranceCutsceneWeaponBase_Statics::NewProp_AnimMontage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AELEntranceCutsceneWeaponBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELEntranceCutsceneWeaponBase_Statics::NewProp_WeaponNo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELEntranceCutsceneWeaponBase_Statics::NewProp_AnimMontage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELEntranceCutsceneWeaponBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELEntranceCutsceneWeaponBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELEntranceCutsceneWeaponBase_Statics::ClassParams = {
		&AELEntranceCutsceneWeaponBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AELEntranceCutsceneWeaponBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AELEntranceCutsceneWeaponBase_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AELEntranceCutsceneWeaponBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELEntranceCutsceneWeaponBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELEntranceCutsceneWeaponBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELEntranceCutsceneWeaponBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELEntranceCutsceneWeaponBase, 4149165974);
	template<> ABP_200508_API UClass* StaticClass<AELEntranceCutsceneWeaponBase>()
	{
		return AELEntranceCutsceneWeaponBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELEntranceCutsceneWeaponBase(Z_Construct_UClass_AELEntranceCutsceneWeaponBase, &AELEntranceCutsceneWeaponBase::StaticClass, TEXT("/Script/ABP_200508"), TEXT("AELEntranceCutsceneWeaponBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELEntranceCutsceneWeaponBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
