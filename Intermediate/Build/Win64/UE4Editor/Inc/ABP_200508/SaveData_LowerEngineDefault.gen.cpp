// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SaveData_LowerEngineDefault.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSaveData_LowerEngineDefault() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_USaveData_LowerEngineDefault_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_USaveData_LowerEngineDefault();
	ABP_200508_API UClass* Z_Construct_UClass_USaveData_LowerEngineBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	void USaveData_LowerEngineDefault::StaticRegisterNativesUSaveData_LowerEngineDefault()
	{
	}
	UClass* Z_Construct_UClass_USaveData_LowerEngineDefault_NoRegister()
	{
		return USaveData_LowerEngineDefault::StaticClass();
	}
	struct Z_Construct_UClass_USaveData_LowerEngineDefault_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USaveData_LowerEngineDefault_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveData_LowerEngineBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveData_LowerEngineDefault_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SaveData_LowerEngineDefault.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SaveData_LowerEngineDefault.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USaveData_LowerEngineDefault_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USaveData_LowerEngineDefault>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USaveData_LowerEngineDefault_Statics::ClassParams = {
		&USaveData_LowerEngineDefault::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USaveData_LowerEngineDefault_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USaveData_LowerEngineDefault_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USaveData_LowerEngineDefault()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USaveData_LowerEngineDefault_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USaveData_LowerEngineDefault, 1701402480);
	template<> ABP_200508_API UClass* StaticClass<USaveData_LowerEngineDefault>()
	{
		return USaveData_LowerEngineDefault::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USaveData_LowerEngineDefault(Z_Construct_UClass_USaveData_LowerEngineDefault, &USaveData_LowerEngineDefault::StaticClass, TEXT("/Script/ABP_200508"), TEXT("USaveData_LowerEngineDefault"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USaveData_LowerEngineDefault);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
