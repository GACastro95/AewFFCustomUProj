// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELCareerStartSequenceManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELCareerStartSequenceManager() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_AELCareerStartSequenceManager_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELCareerStartSequenceManager();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UClass* Z_Construct_UClass_UELCareerModeStart_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELCareerWrestlerSelect_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AELCareerStartSequenceManager::execCheckState)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CheckState(Z_Param__value);
		P_NATIVE_END;
	}
	void AELCareerStartSequenceManager::StaticRegisterNativesAELCareerStartSequenceManager()
	{
		UClass* Class = AELCareerStartSequenceManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CheckState", &AELCareerStartSequenceManager::execCheckState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AELCareerStartSequenceManager_CheckState_Statics
	{
		struct ELCareerStartSequenceManager_eventCheckState_Parms
		{
			int32 _value;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELCareerStartSequenceManager_CheckState_Statics::NewProp__value = { "_value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerStartSequenceManager_eventCheckState_Parms, _value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELCareerStartSequenceManager_CheckState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerStartSequenceManager_CheckState_Statics::NewProp__value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerStartSequenceManager_CheckState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerStartSequenceManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerStartSequenceManager_CheckState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerStartSequenceManager, nullptr, "CheckState", nullptr, nullptr, sizeof(ELCareerStartSequenceManager_eventCheckState_Parms), Z_Construct_UFunction_AELCareerStartSequenceManager_CheckState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerStartSequenceManager_CheckState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerStartSequenceManager_CheckState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerStartSequenceManager_CheckState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerStartSequenceManager_CheckState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerStartSequenceManager_CheckState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AELCareerStartSequenceManager_NoRegister()
	{
		return AELCareerStartSequenceManager::StaticClass();
	}
	struct Z_Construct_UClass_AELCareerStartSequenceManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_pCareerModeStart_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_pCareerModeStart;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_pWrestlerSelect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_pWrestlerSelect;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AELCareerStartSequenceManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AELCareerStartSequenceManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AELCareerStartSequenceManager_CheckState, "CheckState" }, // 1611130743
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELCareerStartSequenceManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELCareerStartSequenceManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELCareerStartSequenceManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELCareerStartSequenceManager_Statics::NewProp_m_pCareerModeStart_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCareerStartSequenceManager" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELCareerStartSequenceManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELCareerStartSequenceManager_Statics::NewProp_m_pCareerModeStart = { "m_pCareerModeStart", nullptr, (EPropertyFlags)0x004200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELCareerStartSequenceManager, m_pCareerModeStart), Z_Construct_UClass_UELCareerModeStart_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELCareerStartSequenceManager_Statics::NewProp_m_pCareerModeStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELCareerStartSequenceManager_Statics::NewProp_m_pCareerModeStart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELCareerStartSequenceManager_Statics::NewProp_m_pWrestlerSelect_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCareerStartSequenceManager" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELCareerStartSequenceManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELCareerStartSequenceManager_Statics::NewProp_m_pWrestlerSelect = { "m_pWrestlerSelect", nullptr, (EPropertyFlags)0x004200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELCareerStartSequenceManager, m_pWrestlerSelect), Z_Construct_UClass_UELCareerWrestlerSelect_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELCareerStartSequenceManager_Statics::NewProp_m_pWrestlerSelect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELCareerStartSequenceManager_Statics::NewProp_m_pWrestlerSelect_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AELCareerStartSequenceManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELCareerStartSequenceManager_Statics::NewProp_m_pCareerModeStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELCareerStartSequenceManager_Statics::NewProp_m_pWrestlerSelect,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELCareerStartSequenceManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELCareerStartSequenceManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELCareerStartSequenceManager_Statics::ClassParams = {
		&AELCareerStartSequenceManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AELCareerStartSequenceManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AELCareerStartSequenceManager_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AELCareerStartSequenceManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELCareerStartSequenceManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELCareerStartSequenceManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELCareerStartSequenceManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELCareerStartSequenceManager, 3056797812);
	template<> ABP_200508_API UClass* StaticClass<AELCareerStartSequenceManager>()
	{
		return AELCareerStartSequenceManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELCareerStartSequenceManager(Z_Construct_UClass_AELCareerStartSequenceManager, &AELCareerStartSequenceManager::StaticClass, TEXT("/Script/ABP_200508"), TEXT("AELCareerStartSequenceManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELCareerStartSequenceManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
