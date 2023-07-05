// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Core/Public/CommonObject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommonObject() {}
// Cross Module References
	ELITE_CORE_API UClass* Z_Construct_UClass_UCommonObject_NoRegister();
	ELITE_CORE_API UClass* Z_Construct_UClass_UCommonObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ELITE_Core();
// End Cross Module References
	void UCommonObject::StaticRegisterNativesUCommonObject()
	{
	}
	UClass* Z_Construct_UClass_UCommonObject_NoRegister()
	{
		return UCommonObject::StaticClass();
	}
	struct Z_Construct_UClass_UCommonObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCommonObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE_Core,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonObject_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CommonObject.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CommonObject.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCommonObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCommonObject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCommonObject_Statics::ClassParams = {
		&UCommonObject::StaticClass,
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
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UCommonObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCommonObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCommonObject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCommonObject, 2988144993);
	template<> ELITE_CORE_API UClass* StaticClass<UCommonObject>()
	{
		return UCommonObject::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCommonObject(Z_Construct_UClass_UCommonObject, &UCommonObject::StaticClass, TEXT("/Script/ELITE_Core"), TEXT("UCommonObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCommonObject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
