// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELGameSettingOprionScirptBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELGameSettingOprionScirptBase() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELGameSettingOprionScirptBase_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELGameSettingOprionScirptBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	void UELGameSettingOprionScirptBase::StaticRegisterNativesUELGameSettingOprionScirptBase()
	{
	}
	UClass* Z_Construct_UClass_UELGameSettingOprionScirptBase_NoRegister()
	{
		return UELGameSettingOprionScirptBase::StaticClass();
	}
	struct Z_Construct_UClass_UELGameSettingOprionScirptBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELGameSettingOprionScirptBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELGameSettingOprionScirptBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELGameSettingOprionScirptBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELGameSettingOprionScirptBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELGameSettingOprionScirptBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELGameSettingOprionScirptBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELGameSettingOprionScirptBase_Statics::ClassParams = {
		&UELGameSettingOprionScirptBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UELGameSettingOprionScirptBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELGameSettingOprionScirptBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELGameSettingOprionScirptBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELGameSettingOprionScirptBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELGameSettingOprionScirptBase, 211762469);
	template<> ABP_200508_API UClass* StaticClass<UELGameSettingOprionScirptBase>()
	{
		return UELGameSettingOprionScirptBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELGameSettingOprionScirptBase(Z_Construct_UClass_UELGameSettingOprionScirptBase, &UELGameSettingOprionScirptBase::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELGameSettingOprionScirptBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELGameSettingOprionScirptBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif