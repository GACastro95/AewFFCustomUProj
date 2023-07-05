// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSEnvQueryGenerator_ActorsOfPickupObject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSEnvQueryGenerator_ActorsOfPickupObject() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELSSEnvQueryGenerator_ActorsOfPickupObject_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSEnvQueryGenerator_ActorsOfPickupObject();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSEnvQueryGenerator_ActorsOfClassBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSPickupType();
// End Cross Module References
	void UELSSEnvQueryGenerator_ActorsOfPickupObject::StaticRegisterNativesUELSSEnvQueryGenerator_ActorsOfPickupObject()
	{
	}
	UClass* Z_Construct_UClass_UELSSEnvQueryGenerator_ActorsOfPickupObject_NoRegister()
	{
		return UELSSEnvQueryGenerator_ActorsOfPickupObject::StaticClass();
	}
	struct Z_Construct_UClass_UELSSEnvQueryGenerator_ActorsOfPickupObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PickupType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PickupType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PickupType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsNeedInteract_MetaData[];
#endif
		static void NewProp_IsNeedInteract_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsNeedInteract;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELSSEnvQueryGenerator_ActorsOfPickupObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELSSEnvQueryGenerator_ActorsOfClassBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSEnvQueryGenerator_ActorsOfPickupObject_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSEnvQueryGenerator_ActorsOfPickupObject.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSEnvQueryGenerator_ActorsOfPickupObject.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UELSSEnvQueryGenerator_ActorsOfPickupObject_Statics::NewProp_PickupType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSEnvQueryGenerator_ActorsOfPickupObject_Statics::NewProp_PickupType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSEnvQueryGenerator_ActorsOfPickupObject" },
		{ "ModuleRelativePath", "Public/ELSSEnvQueryGenerator_ActorsOfPickupObject.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UELSSEnvQueryGenerator_ActorsOfPickupObject_Statics::NewProp_PickupType = { "PickupType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSEnvQueryGenerator_ActorsOfPickupObject, PickupType), Z_Construct_UEnum_ABP_200508_ESSPickupType, METADATA_PARAMS(Z_Construct_UClass_UELSSEnvQueryGenerator_ActorsOfPickupObject_Statics::NewProp_PickupType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSEnvQueryGenerator_ActorsOfPickupObject_Statics::NewProp_PickupType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSEnvQueryGenerator_ActorsOfPickupObject_Statics::NewProp_IsNeedInteract_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSEnvQueryGenerator_ActorsOfPickupObject" },
		{ "ModuleRelativePath", "Public/ELSSEnvQueryGenerator_ActorsOfPickupObject.h" },
	};
#endif
	void Z_Construct_UClass_UELSSEnvQueryGenerator_ActorsOfPickupObject_Statics::NewProp_IsNeedInteract_SetBit(void* Obj)
	{
		((UELSSEnvQueryGenerator_ActorsOfPickupObject*)Obj)->IsNeedInteract = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELSSEnvQueryGenerator_ActorsOfPickupObject_Statics::NewProp_IsNeedInteract = { "IsNeedInteract", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELSSEnvQueryGenerator_ActorsOfPickupObject), &Z_Construct_UClass_UELSSEnvQueryGenerator_ActorsOfPickupObject_Statics::NewProp_IsNeedInteract_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELSSEnvQueryGenerator_ActorsOfPickupObject_Statics::NewProp_IsNeedInteract_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSEnvQueryGenerator_ActorsOfPickupObject_Statics::NewProp_IsNeedInteract_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELSSEnvQueryGenerator_ActorsOfPickupObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSEnvQueryGenerator_ActorsOfPickupObject_Statics::NewProp_PickupType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSEnvQueryGenerator_ActorsOfPickupObject_Statics::NewProp_PickupType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSEnvQueryGenerator_ActorsOfPickupObject_Statics::NewProp_IsNeedInteract,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELSSEnvQueryGenerator_ActorsOfPickupObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELSSEnvQueryGenerator_ActorsOfPickupObject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELSSEnvQueryGenerator_ActorsOfPickupObject_Statics::ClassParams = {
		&UELSSEnvQueryGenerator_ActorsOfPickupObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UELSSEnvQueryGenerator_ActorsOfPickupObject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UELSSEnvQueryGenerator_ActorsOfPickupObject_Statics::PropPointers),
		0,
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELSSEnvQueryGenerator_ActorsOfPickupObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSEnvQueryGenerator_ActorsOfPickupObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELSSEnvQueryGenerator_ActorsOfPickupObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELSSEnvQueryGenerator_ActorsOfPickupObject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELSSEnvQueryGenerator_ActorsOfPickupObject, 875170832);
	template<> ABP_200508_API UClass* StaticClass<UELSSEnvQueryGenerator_ActorsOfPickupObject>()
	{
		return UELSSEnvQueryGenerator_ActorsOfPickupObject::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELSSEnvQueryGenerator_ActorsOfPickupObject(Z_Construct_UClass_UELSSEnvQueryGenerator_ActorsOfPickupObject, &UELSSEnvQueryGenerator_ActorsOfPickupObject::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELSSEnvQueryGenerator_ActorsOfPickupObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELSSEnvQueryGenerator_ActorsOfPickupObject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
