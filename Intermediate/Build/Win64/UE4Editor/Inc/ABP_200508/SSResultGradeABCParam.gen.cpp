// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SSResultGradeABCParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSResultGradeABCParam() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSResultGradeABCParam();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSResultGradeABC();
// End Cross Module References

static_assert(std::is_polymorphic<FSSResultGradeABCParam>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FSSResultGradeABCParam cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FSSResultGradeABCParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FSSResultGradeABCParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSSResultGradeABCParam, Z_Construct_UPackage__Script_ABP_200508(), TEXT("SSResultGradeABCParam"), sizeof(FSSResultGradeABCParam), Get_Z_Construct_UScriptStruct_FSSResultGradeABCParam_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FSSResultGradeABCParam>()
{
	return FSSResultGradeABCParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSSResultGradeABCParam(FSSResultGradeABCParam::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("SSResultGradeABCParam"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFSSResultGradeABCParam
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFSSResultGradeABCParam()
	{
		UScriptStruct::DeferCppStructOps<FSSResultGradeABCParam>(FName(TEXT("SSResultGradeABCParam")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFSSResultGradeABCParam;
	struct Z_Construct_UScriptStruct_FSSResultGradeABCParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Point_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Point;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_GradeABC_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GradeABC_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_GradeABC;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSResultGradeABCParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SSResultGradeABCParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSSResultGradeABCParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSSResultGradeABCParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSResultGradeABCParam_Statics::NewProp_Point_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSResultGradeABCParam" },
		{ "ModuleRelativePath", "Public/SSResultGradeABCParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSResultGradeABCParam_Statics::NewProp_Point = { "Point", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSResultGradeABCParam, Point), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSResultGradeABCParam_Statics::NewProp_Point_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSResultGradeABCParam_Statics::NewProp_Point_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSSResultGradeABCParam_Statics::NewProp_GradeABC_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSResultGradeABCParam_Statics::NewProp_GradeABC_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSResultGradeABCParam" },
		{ "ModuleRelativePath", "Public/SSResultGradeABCParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSSResultGradeABCParam_Statics::NewProp_GradeABC = { "GradeABC", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSResultGradeABCParam, GradeABC), Z_Construct_UEnum_ABP_200508_ESSResultGradeABC, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSResultGradeABCParam_Statics::NewProp_GradeABC_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSResultGradeABCParam_Statics::NewProp_GradeABC_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSSResultGradeABCParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSResultGradeABCParam_Statics::NewProp_Point,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSResultGradeABCParam_Statics::NewProp_GradeABC_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSResultGradeABCParam_Statics::NewProp_GradeABC,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSSResultGradeABCParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"SSResultGradeABCParam",
		sizeof(FSSResultGradeABCParam),
		alignof(FSSResultGradeABCParam),
		Z_Construct_UScriptStruct_FSSResultGradeABCParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSResultGradeABCParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSSResultGradeABCParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSResultGradeABCParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSSResultGradeABCParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSSResultGradeABCParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SSResultGradeABCParam"), sizeof(FSSResultGradeABCParam), Get_Z_Construct_UScriptStruct_FSSResultGradeABCParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSSResultGradeABCParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSSResultGradeABCParam_Hash() { return 1534140175U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
