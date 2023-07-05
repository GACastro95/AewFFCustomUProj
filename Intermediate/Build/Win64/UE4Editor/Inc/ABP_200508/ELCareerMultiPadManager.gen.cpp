// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELCareerMultiPadManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELCareerMultiPadManager() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_AELCareerMultiPadManager_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELCareerMultiPadManager();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AELCareerMultiPadManager::execSetControlledActor)
	{
		P_GET_OBJECT(AActor,Z_Param_pControlledActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetControlledActor(Z_Param_pControlledActor);
		P_NATIVE_END;
	}
	void AELCareerMultiPadManager::StaticRegisterNativesAELCareerMultiPadManager()
	{
		UClass* Class = AELCareerMultiPadManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetControlledActor", &AELCareerMultiPadManager::execSetControlledActor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AELCareerMultiPadManager_SetControlledActor_Statics
	{
		struct ELCareerMultiPadManager_eventSetControlledActor_Parms
		{
			AActor* pControlledActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pControlledActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELCareerMultiPadManager_SetControlledActor_Statics::NewProp_pControlledActor = { "pControlledActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerMultiPadManager_eventSetControlledActor_Parms, pControlledActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELCareerMultiPadManager_SetControlledActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerMultiPadManager_SetControlledActor_Statics::NewProp_pControlledActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerMultiPadManager_SetControlledActor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerMultiPadManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerMultiPadManager_SetControlledActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerMultiPadManager, nullptr, "SetControlledActor", nullptr, nullptr, sizeof(ELCareerMultiPadManager_eventSetControlledActor_Parms), Z_Construct_UFunction_AELCareerMultiPadManager_SetControlledActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerMultiPadManager_SetControlledActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerMultiPadManager_SetControlledActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerMultiPadManager_SetControlledActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerMultiPadManager_SetControlledActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerMultiPadManager_SetControlledActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AELCareerMultiPadManager_NoRegister()
	{
		return AELCareerMultiPadManager::StaticClass();
	}
	struct Z_Construct_UClass_AELCareerMultiPadManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_pControlledActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_pControlledActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AELCareerMultiPadManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AELCareerMultiPadManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AELCareerMultiPadManager_SetControlledActor, "SetControlledActor" }, // 677083336
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELCareerMultiPadManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELCareerMultiPadManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELCareerMultiPadManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELCareerMultiPadManager_Statics::NewProp_m_pControlledActor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCareerMultiPadManager" },
		{ "ModuleRelativePath", "Public/ELCareerMultiPadManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELCareerMultiPadManager_Statics::NewProp_m_pControlledActor = { "m_pControlledActor", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELCareerMultiPadManager, m_pControlledActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELCareerMultiPadManager_Statics::NewProp_m_pControlledActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELCareerMultiPadManager_Statics::NewProp_m_pControlledActor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AELCareerMultiPadManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELCareerMultiPadManager_Statics::NewProp_m_pControlledActor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELCareerMultiPadManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELCareerMultiPadManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELCareerMultiPadManager_Statics::ClassParams = {
		&AELCareerMultiPadManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AELCareerMultiPadManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AELCareerMultiPadManager_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AELCareerMultiPadManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELCareerMultiPadManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELCareerMultiPadManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELCareerMultiPadManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELCareerMultiPadManager, 787979635);
	template<> ABP_200508_API UClass* StaticClass<AELCareerMultiPadManager>()
	{
		return AELCareerMultiPadManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELCareerMultiPadManager(Z_Construct_UClass_AELCareerMultiPadManager, &AELCareerMultiPadManager::StaticClass, TEXT("/Script/ABP_200508"), TEXT("AELCareerMultiPadManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELCareerMultiPadManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
