// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SSWeaponTrapParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSWeaponTrapParam() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSWeaponTrapParam();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
// End Cross Module References

static_assert(std::is_polymorphic<FSSWeaponTrapParam>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FSSWeaponTrapParam cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FSSWeaponTrapParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FSSWeaponTrapParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSSWeaponTrapParam, Z_Construct_UPackage__Script_ABP_200508(), TEXT("SSWeaponTrapParam"), sizeof(FSSWeaponTrapParam), Get_Z_Construct_UScriptStruct_FSSWeaponTrapParam_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FSSWeaponTrapParam>()
{
	return FSSWeaponTrapParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSSWeaponTrapParam(FSSWeaponTrapParam::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("SSWeaponTrapParam"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFSSWeaponTrapParam
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFSSWeaponTrapParam()
	{
		UScriptStruct::DeferCppStructOps<FSSWeaponTrapParam>(FName(TEXT("SSWeaponTrapParam")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFSSWeaponTrapParam;
	struct Z_Construct_UScriptStruct_FSSWeaponTrapParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkeletalMesh_Drop_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkeletalMesh_Drop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkeletalMesh_Attach_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkeletalMesh_Attach;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ObjectClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachLocationOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AttachLocationOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AttachRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PutDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PutDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PutHeightOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PutHeightOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PutHeightLimitTop_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PutHeightLimitTop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PutHeightLimitBottom_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PutHeightLimitBottom;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSWeaponTrapParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SSWeaponTrapParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSSWeaponTrapParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSSWeaponTrapParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSWeaponTrapParam_Statics::NewProp_ID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSWeaponTrapParam" },
		{ "ModuleRelativePath", "Public/SSWeaponTrapParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSWeaponTrapParam_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSWeaponTrapParam, ID), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSWeaponTrapParam_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSWeaponTrapParam_Statics::NewProp_ID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSWeaponTrapParam_Statics::NewProp_SkeletalMesh_Drop_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSWeaponTrapParam" },
		{ "ModuleRelativePath", "Public/SSWeaponTrapParam.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSSWeaponTrapParam_Statics::NewProp_SkeletalMesh_Drop = { "SkeletalMesh_Drop", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSWeaponTrapParam, SkeletalMesh_Drop), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSWeaponTrapParam_Statics::NewProp_SkeletalMesh_Drop_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSWeaponTrapParam_Statics::NewProp_SkeletalMesh_Drop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSWeaponTrapParam_Statics::NewProp_SkeletalMesh_Attach_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSWeaponTrapParam" },
		{ "ModuleRelativePath", "Public/SSWeaponTrapParam.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSSWeaponTrapParam_Statics::NewProp_SkeletalMesh_Attach = { "SkeletalMesh_Attach", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSWeaponTrapParam, SkeletalMesh_Attach), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSWeaponTrapParam_Statics::NewProp_SkeletalMesh_Attach_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSWeaponTrapParam_Statics::NewProp_SkeletalMesh_Attach_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSWeaponTrapParam_Statics::NewProp_ObjectClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSWeaponTrapParam" },
		{ "ModuleRelativePath", "Public/SSWeaponTrapParam.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FSSWeaponTrapParam_Statics::NewProp_ObjectClass = { "ObjectClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSWeaponTrapParam, ObjectClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSWeaponTrapParam_Statics::NewProp_ObjectClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSWeaponTrapParam_Statics::NewProp_ObjectClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSWeaponTrapParam_Statics::NewProp_AttachLocationOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSWeaponTrapParam" },
		{ "ModuleRelativePath", "Public/SSWeaponTrapParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSSWeaponTrapParam_Statics::NewProp_AttachLocationOffset = { "AttachLocationOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSWeaponTrapParam, AttachLocationOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSWeaponTrapParam_Statics::NewProp_AttachLocationOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSWeaponTrapParam_Statics::NewProp_AttachLocationOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSWeaponTrapParam_Statics::NewProp_AttachRotation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSWeaponTrapParam" },
		{ "ModuleRelativePath", "Public/SSWeaponTrapParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSSWeaponTrapParam_Statics::NewProp_AttachRotation = { "AttachRotation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSWeaponTrapParam, AttachRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSWeaponTrapParam_Statics::NewProp_AttachRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSWeaponTrapParam_Statics::NewProp_AttachRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSWeaponTrapParam_Statics::NewProp_PutDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSWeaponTrapParam" },
		{ "ModuleRelativePath", "Public/SSWeaponTrapParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSWeaponTrapParam_Statics::NewProp_PutDistance = { "PutDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSWeaponTrapParam, PutDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSWeaponTrapParam_Statics::NewProp_PutDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSWeaponTrapParam_Statics::NewProp_PutDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSWeaponTrapParam_Statics::NewProp_PutHeightOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSWeaponTrapParam" },
		{ "ModuleRelativePath", "Public/SSWeaponTrapParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSWeaponTrapParam_Statics::NewProp_PutHeightOffset = { "PutHeightOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSWeaponTrapParam, PutHeightOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSWeaponTrapParam_Statics::NewProp_PutHeightOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSWeaponTrapParam_Statics::NewProp_PutHeightOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSWeaponTrapParam_Statics::NewProp_PutHeightLimitTop_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSWeaponTrapParam" },
		{ "ModuleRelativePath", "Public/SSWeaponTrapParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSWeaponTrapParam_Statics::NewProp_PutHeightLimitTop = { "PutHeightLimitTop", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSWeaponTrapParam, PutHeightLimitTop), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSWeaponTrapParam_Statics::NewProp_PutHeightLimitTop_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSWeaponTrapParam_Statics::NewProp_PutHeightLimitTop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSWeaponTrapParam_Statics::NewProp_PutHeightLimitBottom_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSWeaponTrapParam" },
		{ "ModuleRelativePath", "Public/SSWeaponTrapParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSWeaponTrapParam_Statics::NewProp_PutHeightLimitBottom = { "PutHeightLimitBottom", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSWeaponTrapParam, PutHeightLimitBottom), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSWeaponTrapParam_Statics::NewProp_PutHeightLimitBottom_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSWeaponTrapParam_Statics::NewProp_PutHeightLimitBottom_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSSWeaponTrapParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSWeaponTrapParam_Statics::NewProp_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSWeaponTrapParam_Statics::NewProp_SkeletalMesh_Drop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSWeaponTrapParam_Statics::NewProp_SkeletalMesh_Attach,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSWeaponTrapParam_Statics::NewProp_ObjectClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSWeaponTrapParam_Statics::NewProp_AttachLocationOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSWeaponTrapParam_Statics::NewProp_AttachRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSWeaponTrapParam_Statics::NewProp_PutDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSWeaponTrapParam_Statics::NewProp_PutHeightOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSWeaponTrapParam_Statics::NewProp_PutHeightLimitTop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSWeaponTrapParam_Statics::NewProp_PutHeightLimitBottom,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSSWeaponTrapParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"SSWeaponTrapParam",
		sizeof(FSSWeaponTrapParam),
		alignof(FSSWeaponTrapParam),
		Z_Construct_UScriptStruct_FSSWeaponTrapParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSWeaponTrapParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSSWeaponTrapParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSWeaponTrapParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSSWeaponTrapParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSSWeaponTrapParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SSWeaponTrapParam"), sizeof(FSSWeaponTrapParam), Get_Z_Construct_UScriptStruct_FSSWeaponTrapParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSSWeaponTrapParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSSWeaponTrapParam_Hash() { return 1509893021U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
