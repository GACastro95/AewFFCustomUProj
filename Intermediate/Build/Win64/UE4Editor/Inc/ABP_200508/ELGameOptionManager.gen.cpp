// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELGameOptionManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELGameOptionManager() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELGameOptionManager_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELGameOptionManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UELGameOptionManager::execApplyDefaultMatchMatchMekingCode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->ApplyDefaultMatchMatchMekingCode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELGameOptionManager::execApplySaveDataToParam)
	{
		P_GET_OBJECT(UObject,Z_Param__pWorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplySaveDataToParam(Z_Param__pWorldContextObject);
		P_NATIVE_END;
	}
	void UELGameOptionManager::StaticRegisterNativesUELGameOptionManager()
	{
		UClass* Class = UELGameOptionManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyDefaultMatchMatchMekingCode", &UELGameOptionManager::execApplyDefaultMatchMatchMekingCode },
			{ "ApplySaveDataToParam", &UELGameOptionManager::execApplySaveDataToParam },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELGameOptionManager_ApplyDefaultMatchMatchMekingCode_Statics
	{
		struct ELGameOptionManager_eventApplyDefaultMatchMatchMekingCode_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELGameOptionManager_ApplyDefaultMatchMatchMekingCode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELGameOptionManager_eventApplyDefaultMatchMatchMekingCode_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELGameOptionManager_ApplyDefaultMatchMatchMekingCode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELGameOptionManager_ApplyDefaultMatchMatchMekingCode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELGameOptionManager_ApplyDefaultMatchMatchMekingCode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELGameOptionManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELGameOptionManager_ApplyDefaultMatchMatchMekingCode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELGameOptionManager, nullptr, "ApplyDefaultMatchMatchMekingCode", nullptr, nullptr, sizeof(ELGameOptionManager_eventApplyDefaultMatchMatchMekingCode_Parms), Z_Construct_UFunction_UELGameOptionManager_ApplyDefaultMatchMatchMekingCode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELGameOptionManager_ApplyDefaultMatchMatchMekingCode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELGameOptionManager_ApplyDefaultMatchMatchMekingCode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELGameOptionManager_ApplyDefaultMatchMatchMekingCode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELGameOptionManager_ApplyDefaultMatchMatchMekingCode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELGameOptionManager_ApplyDefaultMatchMatchMekingCode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELGameOptionManager_ApplySaveDataToParam_Statics
	{
		struct ELGameOptionManager_eventApplySaveDataToParam_Parms
		{
			UObject* _pWorldContextObject;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pWorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELGameOptionManager_ApplySaveDataToParam_Statics::NewProp__pWorldContextObject = { "_pWorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELGameOptionManager_eventApplySaveDataToParam_Parms, _pWorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELGameOptionManager_ApplySaveDataToParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELGameOptionManager_ApplySaveDataToParam_Statics::NewProp__pWorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELGameOptionManager_ApplySaveDataToParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELGameOptionManager.h" },
		{ "WorldContext", "_pWorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELGameOptionManager_ApplySaveDataToParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELGameOptionManager, nullptr, "ApplySaveDataToParam", nullptr, nullptr, sizeof(ELGameOptionManager_eventApplySaveDataToParam_Parms), Z_Construct_UFunction_UELGameOptionManager_ApplySaveDataToParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELGameOptionManager_ApplySaveDataToParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELGameOptionManager_ApplySaveDataToParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELGameOptionManager_ApplySaveDataToParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELGameOptionManager_ApplySaveDataToParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELGameOptionManager_ApplySaveDataToParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELGameOptionManager_NoRegister()
	{
		return UELGameOptionManager::StaticClass();
	}
	struct Z_Construct_UClass_UELGameOptionManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELGameOptionManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELGameOptionManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELGameOptionManager_ApplyDefaultMatchMatchMekingCode, "ApplyDefaultMatchMatchMekingCode" }, // 2283115552
		{ &Z_Construct_UFunction_UELGameOptionManager_ApplySaveDataToParam, "ApplySaveDataToParam" }, // 2981418917
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELGameOptionManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELGameOptionManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELGameOptionManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELGameOptionManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELGameOptionManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELGameOptionManager_Statics::ClassParams = {
		&UELGameOptionManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELGameOptionManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELGameOptionManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELGameOptionManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELGameOptionManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELGameOptionManager, 1609699857);
	template<> ABP_200508_API UClass* StaticClass<UELGameOptionManager>()
	{
		return UELGameOptionManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELGameOptionManager(Z_Construct_UClass_UELGameOptionManager, &UELGameOptionManager::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELGameOptionManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELGameOptionManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
