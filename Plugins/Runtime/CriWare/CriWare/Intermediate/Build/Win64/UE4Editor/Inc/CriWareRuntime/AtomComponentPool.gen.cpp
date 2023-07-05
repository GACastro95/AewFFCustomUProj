// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/AtomComponentPool.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomComponentPool() {}
// Cross Module References
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomComponentPool_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomComponentPool();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomComponent_NoRegister();
// End Cross Module References
	void UAtomComponentPool::StaticRegisterNativesUAtomComponentPool()
	{
	}
	UClass* Z_Construct_UClass_UAtomComponentPool_NoRegister()
	{
		return UAtomComponentPool::StaticClass();
	}
	struct Z_Construct_UClass_UAtomComponentPool_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pool_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Pool_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pool_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Pool;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomComponentPool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomComponentPool_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AtomComponentPool.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AtomComponentPool.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomComponentPool_Statics::NewProp_Pool_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomComponentPool" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AtomComponentPool.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAtomComponentPool_Statics::NewProp_Pool_Inner = { "Pool", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAtomComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAtomComponentPool_Statics::NewProp_Pool_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomComponentPool_Statics::NewProp_Pool_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomComponentPool_Statics::NewProp_Pool_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomComponentPool" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AtomComponentPool.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAtomComponentPool_Statics::NewProp_Pool = { "Pool", nullptr, (EPropertyFlags)0x004000800000000d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAtomComponentPool, Pool), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAtomComponentPool_Statics::NewProp_Pool_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomComponentPool_Statics::NewProp_Pool_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAtomComponentPool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomComponentPool_Statics::NewProp_Pool_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomComponentPool_Statics::NewProp_Pool,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomComponentPool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomComponentPool>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAtomComponentPool_Statics::ClassParams = {
		&UAtomComponentPool::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAtomComponentPool_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAtomComponentPool_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAtomComponentPool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomComponentPool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomComponentPool()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAtomComponentPool_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAtomComponentPool, 3593794326);
	template<> CRIWARERUNTIME_API UClass* StaticClass<UAtomComponentPool>()
	{
		return UAtomComponentPool::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAtomComponentPool(Z_Construct_UClass_UAtomComponentPool, &UAtomComponentPool::StaticClass, TEXT("/Script/CriWareRuntime"), TEXT("UAtomComponentPool"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomComponentPool);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
