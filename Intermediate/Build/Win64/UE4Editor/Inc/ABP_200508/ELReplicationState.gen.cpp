// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELReplicationState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELReplicationState() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELReplicationState_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELReplicationState();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELReplicationPropertyInfo();
// End Cross Module References
	void UELReplicationState::StaticRegisterNativesUELReplicationState()
	{
	}
	UClass* Z_Construct_UClass_UELReplicationState_NoRegister()
	{
		return UELReplicationState::StaticClass();
	}
	struct Z_Construct_UClass_UELReplicationState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ObjectClass;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PropertyInfo_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PropertyInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PropertyInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReplicationTickInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReplicationTickInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReplicationTickIntervalCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReplicationTickIntervalCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELReplicationState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELReplicationState_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELReplicationState.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELReplicationState.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELReplicationState_Statics::NewProp_ObjectClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELReplicationState" },
		{ "ModuleRelativePath", "Public/ELReplicationState.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UELReplicationState_Statics::NewProp_ObjectClass = { "ObjectClass", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELReplicationState, ObjectClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UELReplicationState_Statics::NewProp_ObjectClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELReplicationState_Statics::NewProp_ObjectClass_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELReplicationState_Statics::NewProp_PropertyInfo_Inner = { "PropertyInfo", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FELReplicationPropertyInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELReplicationState_Statics::NewProp_PropertyInfo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELReplicationState" },
		{ "ModuleRelativePath", "Public/ELReplicationState.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELReplicationState_Statics::NewProp_PropertyInfo = { "PropertyInfo", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELReplicationState, PropertyInfo), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELReplicationState_Statics::NewProp_PropertyInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELReplicationState_Statics::NewProp_PropertyInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELReplicationState_Statics::NewProp_ReplicationTickInterval_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELReplicationState" },
		{ "ModuleRelativePath", "Public/ELReplicationState.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UELReplicationState_Statics::NewProp_ReplicationTickInterval = { "ReplicationTickInterval", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELReplicationState, ReplicationTickInterval), METADATA_PARAMS(Z_Construct_UClass_UELReplicationState_Statics::NewProp_ReplicationTickInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELReplicationState_Statics::NewProp_ReplicationTickInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELReplicationState_Statics::NewProp_ReplicationTickIntervalCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELReplicationState" },
		{ "ModuleRelativePath", "Public/ELReplicationState.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UELReplicationState_Statics::NewProp_ReplicationTickIntervalCount = { "ReplicationTickIntervalCount", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELReplicationState, ReplicationTickIntervalCount), METADATA_PARAMS(Z_Construct_UClass_UELReplicationState_Statics::NewProp_ReplicationTickIntervalCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELReplicationState_Statics::NewProp_ReplicationTickIntervalCount_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELReplicationState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELReplicationState_Statics::NewProp_ObjectClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELReplicationState_Statics::NewProp_PropertyInfo_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELReplicationState_Statics::NewProp_PropertyInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELReplicationState_Statics::NewProp_ReplicationTickInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELReplicationState_Statics::NewProp_ReplicationTickIntervalCount,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELReplicationState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELReplicationState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELReplicationState_Statics::ClassParams = {
		&UELReplicationState::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UELReplicationState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UELReplicationState_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELReplicationState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELReplicationState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELReplicationState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELReplicationState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELReplicationState, 1520258645);
	template<> ABP_200508_API UClass* StaticClass<UELReplicationState>()
	{
		return UELReplicationState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELReplicationState(Z_Construct_UClass_UELReplicationState, &UELReplicationState::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELReplicationState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELReplicationState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
