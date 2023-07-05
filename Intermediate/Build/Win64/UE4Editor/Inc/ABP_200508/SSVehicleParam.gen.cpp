// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SSVehicleParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSVehicleParam() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSVehicleParam();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSVehicleType();
// End Cross Module References

static_assert(std::is_polymorphic<FSSVehicleParam>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FSSVehicleParam cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FSSVehicleParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FSSVehicleParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSSVehicleParam, Z_Construct_UPackage__Script_ABP_200508(), TEXT("SSVehicleParam"), sizeof(FSSVehicleParam), Get_Z_Construct_UScriptStruct_FSSVehicleParam_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FSSVehicleParam>()
{
	return FSSVehicleParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSSVehicleParam(FSSVehicleParam::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("SSVehicleParam"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFSSVehicleParam
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFSSVehicleParam()
	{
		UScriptStruct::DeferCppStructOps<FSSVehicleParam>(FName(TEXT("SSVehicleParam")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFSSVehicleParam;
	struct Z_Construct_UScriptStruct_FSSVehicleParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_VehicleType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VehicleType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_VehicleType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSVehicleParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SSVehicleParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSSVehicleParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSSVehicleParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSVehicleParam_Statics::NewProp_ID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSVehicleParam" },
		{ "ModuleRelativePath", "Public/SSVehicleParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSVehicleParam_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSVehicleParam, ID), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSVehicleParam_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSVehicleParam_Statics::NewProp_ID_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSSVehicleParam_Statics::NewProp_VehicleType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSVehicleParam_Statics::NewProp_VehicleType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSVehicleParam" },
		{ "ModuleRelativePath", "Public/SSVehicleParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSSVehicleParam_Statics::NewProp_VehicleType = { "VehicleType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSVehicleParam, VehicleType), Z_Construct_UEnum_ABP_200508_ESSVehicleType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSVehicleParam_Statics::NewProp_VehicleType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSVehicleParam_Statics::NewProp_VehicleType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSSVehicleParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSVehicleParam_Statics::NewProp_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSVehicleParam_Statics::NewProp_VehicleType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSVehicleParam_Statics::NewProp_VehicleType,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSSVehicleParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"SSVehicleParam",
		sizeof(FSSVehicleParam),
		alignof(FSSVehicleParam),
		Z_Construct_UScriptStruct_FSSVehicleParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSVehicleParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSSVehicleParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSVehicleParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSSVehicleParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSSVehicleParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SSVehicleParam"), sizeof(FSSVehicleParam), Get_Z_Construct_UScriptStruct_FSSVehicleParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSSVehicleParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSSVehicleParam_Hash() { return 1995408307U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
