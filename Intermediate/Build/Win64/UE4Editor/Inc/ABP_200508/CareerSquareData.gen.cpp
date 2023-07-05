// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/CareerSquareData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCareerSquareData() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FCareerSquareData();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerSquareType();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerSquareShape();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerSquareColor();
// End Cross Module References

static_assert(std::is_polymorphic<FCareerSquareData>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FCareerSquareData cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FCareerSquareData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FCareerSquareData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCareerSquareData, Z_Construct_UPackage__Script_ABP_200508(), TEXT("CareerSquareData"), sizeof(FCareerSquareData), Get_Z_Construct_UScriptStruct_FCareerSquareData_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FCareerSquareData>()
{
	return FCareerSquareData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCareerSquareData(FCareerSquareData::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("CareerSquareData"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFCareerSquareData
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFCareerSquareData()
	{
		UScriptStruct::DeferCppStructOps<FCareerSquareData>(FName(TEXT("CareerSquareData")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFCareerSquareData;
	struct Z_Construct_UScriptStruct_FCareerSquareData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SquareType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SquareType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SquareType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Shape_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Shape_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Shape;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Color_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Color;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDynamite_MetaData[];
#endif
		static void NewProp_bDynamite_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDynamite;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPPV_MetaData[];
#endif
		static void NewProp_bPPV_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPPV;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerSquareData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CareerSquareData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCareerSquareData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCareerSquareData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerSquareData_Statics::NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerSquareData" },
		{ "ModuleRelativePath", "Public/CareerSquareData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerSquareData_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerSquareData, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerSquareData_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerSquareData_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerSquareData_Statics::NewProp_SquareType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerSquareData_Statics::NewProp_SquareType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerSquareData" },
		{ "ModuleRelativePath", "Public/CareerSquareData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerSquareData_Statics::NewProp_SquareType = { "SquareType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerSquareData, SquareType), Z_Construct_UEnum_ABP_200508_ECareerSquareType, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerSquareData_Statics::NewProp_SquareType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerSquareData_Statics::NewProp_SquareType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerSquareData_Statics::NewProp_Shape_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerSquareData_Statics::NewProp_Shape_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerSquareData" },
		{ "ModuleRelativePath", "Public/CareerSquareData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerSquareData_Statics::NewProp_Shape = { "Shape", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerSquareData, Shape), Z_Construct_UEnum_ABP_200508_ECareerSquareShape, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerSquareData_Statics::NewProp_Shape_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerSquareData_Statics::NewProp_Shape_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerSquareData_Statics::NewProp_Color_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerSquareData_Statics::NewProp_Color_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerSquareData" },
		{ "ModuleRelativePath", "Public/CareerSquareData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerSquareData_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerSquareData, Color), Z_Construct_UEnum_ABP_200508_ECareerSquareColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerSquareData_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerSquareData_Statics::NewProp_Color_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerSquareData_Statics::NewProp_bDynamite_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerSquareData" },
		{ "ModuleRelativePath", "Public/CareerSquareData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCareerSquareData_Statics::NewProp_bDynamite_SetBit(void* Obj)
	{
		((FCareerSquareData*)Obj)->bDynamite = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCareerSquareData_Statics::NewProp_bDynamite = { "bDynamite", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCareerSquareData), &Z_Construct_UScriptStruct_FCareerSquareData_Statics::NewProp_bDynamite_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerSquareData_Statics::NewProp_bDynamite_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerSquareData_Statics::NewProp_bDynamite_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerSquareData_Statics::NewProp_bPPV_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerSquareData" },
		{ "ModuleRelativePath", "Public/CareerSquareData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCareerSquareData_Statics::NewProp_bPPV_SetBit(void* Obj)
	{
		((FCareerSquareData*)Obj)->bPPV = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCareerSquareData_Statics::NewProp_bPPV = { "bPPV", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCareerSquareData), &Z_Construct_UScriptStruct_FCareerSquareData_Statics::NewProp_bPPV_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerSquareData_Statics::NewProp_bPPV_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerSquareData_Statics::NewProp_bPPV_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCareerSquareData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerSquareData_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerSquareData_Statics::NewProp_SquareType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerSquareData_Statics::NewProp_SquareType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerSquareData_Statics::NewProp_Shape_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerSquareData_Statics::NewProp_Shape,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerSquareData_Statics::NewProp_Color_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerSquareData_Statics::NewProp_Color,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerSquareData_Statics::NewProp_bDynamite,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerSquareData_Statics::NewProp_bPPV,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCareerSquareData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"CareerSquareData",
		sizeof(FCareerSquareData),
		alignof(FCareerSquareData),
		Z_Construct_UScriptStruct_FCareerSquareData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerSquareData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerSquareData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerSquareData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCareerSquareData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCareerSquareData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CareerSquareData"), sizeof(FCareerSquareData), Get_Z_Construct_UScriptStruct_FCareerSquareData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCareerSquareData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCareerSquareData_Hash() { return 3227510490U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
