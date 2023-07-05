// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE/Public/ELPlayerSaveDataAccessObject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELPlayerSaveDataAccessObject() {}
// Cross Module References
	ELITE_API UClass* Z_Construct_UClass_UELPlayerSaveDataAccessObject_NoRegister();
	ELITE_API UClass* Z_Construct_UClass_UELPlayerSaveDataAccessObject();
	ELITE_API UClass* Z_Construct_UClass_UELGeneralSaveDataAccessObject();
	UPackage* Z_Construct_UPackage__Script_ELITE();
// End Cross Module References
	void UELPlayerSaveDataAccessObject::StaticRegisterNativesUELPlayerSaveDataAccessObject()
	{
	}
	UClass* Z_Construct_UClass_UELPlayerSaveDataAccessObject_NoRegister()
	{
		return UELPlayerSaveDataAccessObject::StaticClass();
	}
	struct Z_Construct_UClass_UELPlayerSaveDataAccessObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELPlayerSaveDataAccessObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELGeneralSaveDataAccessObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELPlayerSaveDataAccessObject_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELPlayerSaveDataAccessObject.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELPlayerSaveDataAccessObject.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELPlayerSaveDataAccessObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELPlayerSaveDataAccessObject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELPlayerSaveDataAccessObject_Statics::ClassParams = {
		&UELPlayerSaveDataAccessObject::StaticClass,
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
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELPlayerSaveDataAccessObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELPlayerSaveDataAccessObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELPlayerSaveDataAccessObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELPlayerSaveDataAccessObject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELPlayerSaveDataAccessObject, 2996598441);
	template<> ELITE_API UClass* StaticClass<UELPlayerSaveDataAccessObject>()
	{
		return UELPlayerSaveDataAccessObject::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELPlayerSaveDataAccessObject(Z_Construct_UClass_UELPlayerSaveDataAccessObject, &UELPlayerSaveDataAccessObject::StaticClass, TEXT("/Script/ELITE"), TEXT("UELPlayerSaveDataAccessObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELPlayerSaveDataAccessObject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
