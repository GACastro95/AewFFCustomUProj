// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SaveData_Encrypter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSaveData_Encrypter() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_USaveData_Encrypter_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_USaveData_Encrypter();
	ABP_200508_API UClass* Z_Construct_UClass_USaveData_ProcessBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	void USaveData_Encrypter::StaticRegisterNativesUSaveData_Encrypter()
	{
	}
	UClass* Z_Construct_UClass_USaveData_Encrypter_NoRegister()
	{
		return USaveData_Encrypter::StaticClass();
	}
	struct Z_Construct_UClass_USaveData_Encrypter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USaveData_Encrypter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveData_ProcessBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveData_Encrypter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SaveData_Encrypter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SaveData_Encrypter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USaveData_Encrypter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USaveData_Encrypter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USaveData_Encrypter_Statics::ClassParams = {
		&USaveData_Encrypter::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USaveData_Encrypter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USaveData_Encrypter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USaveData_Encrypter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USaveData_Encrypter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USaveData_Encrypter, 3227439438);
	template<> ABP_200508_API UClass* StaticClass<USaveData_Encrypter>()
	{
		return USaveData_Encrypter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USaveData_Encrypter(Z_Construct_UClass_USaveData_Encrypter, &USaveData_Encrypter::StaticClass, TEXT("/Script/ABP_200508"), TEXT("USaveData_Encrypter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USaveData_Encrypter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
