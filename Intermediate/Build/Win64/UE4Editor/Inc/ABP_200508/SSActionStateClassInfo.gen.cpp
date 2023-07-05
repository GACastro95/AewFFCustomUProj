// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SSActionStateClassInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSActionStateClassInfo() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSActionStateClassInfo();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSActionStateBase_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FSSActionStateClassInfo>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FSSActionStateClassInfo cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FSSActionStateClassInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FSSActionStateClassInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSSActionStateClassInfo, Z_Construct_UPackage__Script_ABP_200508(), TEXT("SSActionStateClassInfo"), sizeof(FSSActionStateClassInfo), Get_Z_Construct_UScriptStruct_FSSActionStateClassInfo_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FSSActionStateClassInfo>()
{
	return FSSActionStateClassInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSSActionStateClassInfo(FSSActionStateClassInfo::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("SSActionStateClassInfo"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFSSActionStateClassInfo
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFSSActionStateClassInfo()
	{
		UScriptStruct::DeferCppStructOps<FSSActionStateClassInfo>(FName(TEXT("SSActionStateClassInfo")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFSSActionStateClassInfo;
	struct Z_Construct_UScriptStruct_FSSActionStateClassInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionStateClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ActionStateClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StateId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StateId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSActionStateClassInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SSActionStateClassInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSSActionStateClassInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSSActionStateClassInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSActionStateClassInfo_Statics::NewProp_ActionStateClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSActionStateClassInfo" },
		{ "ModuleRelativePath", "Public/SSActionStateClassInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FSSActionStateClassInfo_Statics::NewProp_ActionStateClass = { "ActionStateClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSActionStateClassInfo, ActionStateClass), Z_Construct_UClass_UELSSActionStateBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSActionStateClassInfo_Statics::NewProp_ActionStateClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSActionStateClassInfo_Statics::NewProp_ActionStateClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSActionStateClassInfo_Statics::NewProp_StateId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSActionStateClassInfo" },
		{ "ModuleRelativePath", "Public/SSActionStateClassInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSActionStateClassInfo_Statics::NewProp_StateId = { "StateId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSActionStateClassInfo, StateId), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSActionStateClassInfo_Statics::NewProp_StateId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSActionStateClassInfo_Statics::NewProp_StateId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSSActionStateClassInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSActionStateClassInfo_Statics::NewProp_ActionStateClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSActionStateClassInfo_Statics::NewProp_StateId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSSActionStateClassInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"SSActionStateClassInfo",
		sizeof(FSSActionStateClassInfo),
		alignof(FSSActionStateClassInfo),
		Z_Construct_UScriptStruct_FSSActionStateClassInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSActionStateClassInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSSActionStateClassInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSActionStateClassInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSSActionStateClassInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSSActionStateClassInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SSActionStateClassInfo"), sizeof(FSSActionStateClassInfo), Get_Z_Construct_UScriptStruct_FSSActionStateClassInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSSActionStateClassInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSSActionStateClassInfo_Hash() { return 1030110500U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
