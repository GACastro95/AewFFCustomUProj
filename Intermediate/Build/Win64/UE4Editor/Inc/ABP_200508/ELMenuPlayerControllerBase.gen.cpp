// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELMenuPlayerControllerBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELMenuPlayerControllerBase() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_AELMenuPlayerControllerBase_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELMenuPlayerControllerBase();
	ABP_200508_API UClass* Z_Construct_UClass_AELGameCommonPlayerControllerBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UClass* Z_Construct_UClass_AELCareerMultiPadManager_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AELMenuPlayerControllerBase::execBindActionWithMultiPadManager)
	{
		P_GET_OBJECT(AELCareerMultiPadManager,Z_Param_pPadManager);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BindActionWithMultiPadManager(Z_Param_pPadManager);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELMenuPlayerControllerBase::execRemoveActionWithMultiPadManager)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveActionWithMultiPadManager();
		P_NATIVE_END;
	}
	void AELMenuPlayerControllerBase::StaticRegisterNativesAELMenuPlayerControllerBase()
	{
		UClass* Class = AELMenuPlayerControllerBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BindActionWithMultiPadManager", &AELMenuPlayerControllerBase::execBindActionWithMultiPadManager },
			{ "RemoveActionWithMultiPadManager", &AELMenuPlayerControllerBase::execRemoveActionWithMultiPadManager },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AELMenuPlayerControllerBase_BindActionWithMultiPadManager_Statics
	{
		struct ELMenuPlayerControllerBase_eventBindActionWithMultiPadManager_Parms
		{
			AELCareerMultiPadManager* pPadManager;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pPadManager;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELMenuPlayerControllerBase_BindActionWithMultiPadManager_Statics::NewProp_pPadManager = { "pPadManager", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMenuPlayerControllerBase_eventBindActionWithMultiPadManager_Parms, pPadManager), Z_Construct_UClass_AELCareerMultiPadManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELMenuPlayerControllerBase_BindActionWithMultiPadManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELMenuPlayerControllerBase_BindActionWithMultiPadManager_Statics::NewProp_pPadManager,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELMenuPlayerControllerBase_BindActionWithMultiPadManager_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMenuPlayerControllerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELMenuPlayerControllerBase_BindActionWithMultiPadManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELMenuPlayerControllerBase, nullptr, "BindActionWithMultiPadManager", nullptr, nullptr, sizeof(ELMenuPlayerControllerBase_eventBindActionWithMultiPadManager_Parms), Z_Construct_UFunction_AELMenuPlayerControllerBase_BindActionWithMultiPadManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELMenuPlayerControllerBase_BindActionWithMultiPadManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELMenuPlayerControllerBase_BindActionWithMultiPadManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELMenuPlayerControllerBase_BindActionWithMultiPadManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELMenuPlayerControllerBase_BindActionWithMultiPadManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELMenuPlayerControllerBase_BindActionWithMultiPadManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELMenuPlayerControllerBase_RemoveActionWithMultiPadManager_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELMenuPlayerControllerBase_RemoveActionWithMultiPadManager_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMenuPlayerControllerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELMenuPlayerControllerBase_RemoveActionWithMultiPadManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELMenuPlayerControllerBase, nullptr, "RemoveActionWithMultiPadManager", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELMenuPlayerControllerBase_RemoveActionWithMultiPadManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELMenuPlayerControllerBase_RemoveActionWithMultiPadManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELMenuPlayerControllerBase_RemoveActionWithMultiPadManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELMenuPlayerControllerBase_RemoveActionWithMultiPadManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AELMenuPlayerControllerBase_NoRegister()
	{
		return AELMenuPlayerControllerBase::StaticClass();
	}
	struct Z_Construct_UClass_AELMenuPlayerControllerBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AELMenuPlayerControllerBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AELGameCommonPlayerControllerBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AELMenuPlayerControllerBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AELMenuPlayerControllerBase_BindActionWithMultiPadManager, "BindActionWithMultiPadManager" }, // 2452811949
		{ &Z_Construct_UFunction_AELMenuPlayerControllerBase_RemoveActionWithMultiPadManager, "RemoveActionWithMultiPadManager" }, // 1919307923
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELMenuPlayerControllerBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ELMenuPlayerControllerBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELMenuPlayerControllerBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELMenuPlayerControllerBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELMenuPlayerControllerBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELMenuPlayerControllerBase_Statics::ClassParams = {
		&AELMenuPlayerControllerBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AELMenuPlayerControllerBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELMenuPlayerControllerBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELMenuPlayerControllerBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELMenuPlayerControllerBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELMenuPlayerControllerBase, 2482913070);
	template<> ABP_200508_API UClass* StaticClass<AELMenuPlayerControllerBase>()
	{
		return AELMenuPlayerControllerBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELMenuPlayerControllerBase(Z_Construct_UClass_AELMenuPlayerControllerBase, &AELMenuPlayerControllerBase::StaticClass, TEXT("/Script/ABP_200508"), TEXT("AELMenuPlayerControllerBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELMenuPlayerControllerBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
