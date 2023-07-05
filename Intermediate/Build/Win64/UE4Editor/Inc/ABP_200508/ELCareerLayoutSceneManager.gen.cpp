// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELCareerLayoutSceneManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELCareerLayoutSceneManager() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_AELCareerLayoutSceneManager_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELCareerLayoutSceneManager();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerLayoutSceneState();
	ABP_200508_API UClass* Z_Construct_UClass_UELGameInstance_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AELCareerLayoutSceneManager::execCheckState)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CheckState(Z_Param__value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELCareerLayoutSceneManager::execSetState)
	{
		P_GET_ENUM(ECareerLayoutSceneState,Z_Param_State);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetState(ECareerLayoutSceneState(Z_Param_State));
		P_NATIVE_END;
	}
	void AELCareerLayoutSceneManager::StaticRegisterNativesAELCareerLayoutSceneManager()
	{
		UClass* Class = AELCareerLayoutSceneManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CheckState", &AELCareerLayoutSceneManager::execCheckState },
			{ "SetState", &AELCareerLayoutSceneManager::execSetState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AELCareerLayoutSceneManager_CheckState_Statics
	{
		struct ELCareerLayoutSceneManager_eventCheckState_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELCareerLayoutSceneManager_CheckState_Statics::NewProp__value = { "_value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerLayoutSceneManager_eventCheckState_Parms, _value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELCareerLayoutSceneManager_CheckState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerLayoutSceneManager_CheckState_Statics::NewProp__value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerLayoutSceneManager_CheckState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerLayoutSceneManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerLayoutSceneManager_CheckState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerLayoutSceneManager, nullptr, "CheckState", nullptr, nullptr, sizeof(ELCareerLayoutSceneManager_eventCheckState_Parms), Z_Construct_UFunction_AELCareerLayoutSceneManager_CheckState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerLayoutSceneManager_CheckState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerLayoutSceneManager_CheckState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerLayoutSceneManager_CheckState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerLayoutSceneManager_CheckState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerLayoutSceneManager_CheckState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerLayoutSceneManager_SetState_Statics
	{
		struct ELCareerLayoutSceneManager_eventSetState_Parms
		{
			ECareerLayoutSceneState State;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_State_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_State;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELCareerLayoutSceneManager_SetState_Statics::NewProp_State_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELCareerLayoutSceneManager_SetState_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerLayoutSceneManager_eventSetState_Parms, State), Z_Construct_UEnum_ABP_200508_ECareerLayoutSceneState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELCareerLayoutSceneManager_SetState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerLayoutSceneManager_SetState_Statics::NewProp_State_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerLayoutSceneManager_SetState_Statics::NewProp_State,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerLayoutSceneManager_SetState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerLayoutSceneManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerLayoutSceneManager_SetState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerLayoutSceneManager, nullptr, "SetState", nullptr, nullptr, sizeof(ELCareerLayoutSceneManager_eventSetState_Parms), Z_Construct_UFunction_AELCareerLayoutSceneManager_SetState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerLayoutSceneManager_SetState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerLayoutSceneManager_SetState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerLayoutSceneManager_SetState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerLayoutSceneManager_SetState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerLayoutSceneManager_SetState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AELCareerLayoutSceneManager_NoRegister()
	{
		return AELCareerLayoutSceneManager::StaticClass();
	}
	struct Z_Construct_UClass_AELCareerLayoutSceneManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_pELGameInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_pELGameInstance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AELCareerLayoutSceneManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AELCareerLayoutSceneManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AELCareerLayoutSceneManager_CheckState, "CheckState" }, // 3706709370
		{ &Z_Construct_UFunction_AELCareerLayoutSceneManager_SetState, "SetState" }, // 3703407352
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELCareerLayoutSceneManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELCareerLayoutSceneManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELCareerLayoutSceneManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELCareerLayoutSceneManager_Statics::NewProp_m_pELGameInstance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCareerLayoutSceneManager" },
		{ "ModuleRelativePath", "Public/ELCareerLayoutSceneManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELCareerLayoutSceneManager_Statics::NewProp_m_pELGameInstance = { "m_pELGameInstance", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELCareerLayoutSceneManager, m_pELGameInstance), Z_Construct_UClass_UELGameInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELCareerLayoutSceneManager_Statics::NewProp_m_pELGameInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELCareerLayoutSceneManager_Statics::NewProp_m_pELGameInstance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AELCareerLayoutSceneManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELCareerLayoutSceneManager_Statics::NewProp_m_pELGameInstance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELCareerLayoutSceneManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELCareerLayoutSceneManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELCareerLayoutSceneManager_Statics::ClassParams = {
		&AELCareerLayoutSceneManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AELCareerLayoutSceneManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AELCareerLayoutSceneManager_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AELCareerLayoutSceneManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELCareerLayoutSceneManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELCareerLayoutSceneManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELCareerLayoutSceneManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELCareerLayoutSceneManager, 3076477957);
	template<> ABP_200508_API UClass* StaticClass<AELCareerLayoutSceneManager>()
	{
		return AELCareerLayoutSceneManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELCareerLayoutSceneManager(Z_Construct_UClass_AELCareerLayoutSceneManager, &AELCareerLayoutSceneManager::StaticClass, TEXT("/Script/ABP_200508"), TEXT("AELCareerLayoutSceneManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELCareerLayoutSceneManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
