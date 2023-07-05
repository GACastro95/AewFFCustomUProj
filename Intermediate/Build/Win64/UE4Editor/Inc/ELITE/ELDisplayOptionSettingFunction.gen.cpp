// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE/Public/ELDisplayOptionSettingFunction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELDisplayOptionSettingFunction() {}
// Cross Module References
	ELITE_API UClass* Z_Construct_UClass_UELDisplayOptionSettingFunction_NoRegister();
	ELITE_API UClass* Z_Construct_UClass_UELDisplayOptionSettingFunction();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_ELITE();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UELDisplayOptionSettingFunction::execInitializeDisplayOptionSetting)
	{
		P_GET_OBJECT(UObject,Z_Param__pWorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELDisplayOptionSettingFunction::InitializeDisplayOptionSetting(Z_Param__pWorldContextObject);
		P_NATIVE_END;
	}
	void UELDisplayOptionSettingFunction::StaticRegisterNativesUELDisplayOptionSettingFunction()
	{
		UClass* Class = UELDisplayOptionSettingFunction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "InitializeDisplayOptionSetting", &UELDisplayOptionSettingFunction::execInitializeDisplayOptionSetting },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELDisplayOptionSettingFunction_InitializeDisplayOptionSetting_Statics
	{
		struct ELDisplayOptionSettingFunction_eventInitializeDisplayOptionSetting_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELDisplayOptionSettingFunction_InitializeDisplayOptionSetting_Statics::NewProp__pWorldContextObject = { "_pWorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDisplayOptionSettingFunction_eventInitializeDisplayOptionSetting_Parms, _pWorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDisplayOptionSettingFunction_InitializeDisplayOptionSetting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDisplayOptionSettingFunction_InitializeDisplayOptionSetting_Statics::NewProp__pWorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDisplayOptionSettingFunction_InitializeDisplayOptionSetting_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDisplayOptionSettingFunction.h" },
		{ "WorldContext", "_pWorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDisplayOptionSettingFunction_InitializeDisplayOptionSetting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDisplayOptionSettingFunction, nullptr, "InitializeDisplayOptionSetting", nullptr, nullptr, sizeof(ELDisplayOptionSettingFunction_eventInitializeDisplayOptionSetting_Parms), Z_Construct_UFunction_UELDisplayOptionSettingFunction_InitializeDisplayOptionSetting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDisplayOptionSettingFunction_InitializeDisplayOptionSetting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDisplayOptionSettingFunction_InitializeDisplayOptionSetting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDisplayOptionSettingFunction_InitializeDisplayOptionSetting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDisplayOptionSettingFunction_InitializeDisplayOptionSetting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDisplayOptionSettingFunction_InitializeDisplayOptionSetting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELDisplayOptionSettingFunction_NoRegister()
	{
		return UELDisplayOptionSettingFunction::StaticClass();
	}
	struct Z_Construct_UClass_UELDisplayOptionSettingFunction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELDisplayOptionSettingFunction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELDisplayOptionSettingFunction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELDisplayOptionSettingFunction_InitializeDisplayOptionSetting, "InitializeDisplayOptionSetting" }, // 954167999
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELDisplayOptionSettingFunction_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELDisplayOptionSettingFunction.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELDisplayOptionSettingFunction.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELDisplayOptionSettingFunction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELDisplayOptionSettingFunction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELDisplayOptionSettingFunction_Statics::ClassParams = {
		&UELDisplayOptionSettingFunction::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UELDisplayOptionSettingFunction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELDisplayOptionSettingFunction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELDisplayOptionSettingFunction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELDisplayOptionSettingFunction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELDisplayOptionSettingFunction, 864291181);
	template<> ELITE_API UClass* StaticClass<UELDisplayOptionSettingFunction>()
	{
		return UELDisplayOptionSettingFunction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELDisplayOptionSettingFunction(Z_Construct_UClass_UELDisplayOptionSettingFunction, &UELDisplayOptionSettingFunction::StaticClass, TEXT("/Script/ELITE"), TEXT("UELDisplayOptionSettingFunction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELDisplayOptionSettingFunction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
