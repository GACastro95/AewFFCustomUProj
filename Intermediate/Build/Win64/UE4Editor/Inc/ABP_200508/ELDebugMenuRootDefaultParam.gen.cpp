// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELDebugMenuRootDefaultParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELDebugMenuRootDefaultParam() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELDebugMenuRootDefaultParam();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EELDebugMenu_MenuType();
// End Cross Module References
class UScriptStruct* FELDebugMenuRootDefaultParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FELDebugMenuRootDefaultParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FELDebugMenuRootDefaultParam, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ELDebugMenuRootDefaultParam"), sizeof(FELDebugMenuRootDefaultParam), Get_Z_Construct_UScriptStruct_FELDebugMenuRootDefaultParam_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FELDebugMenuRootDefaultParam>()
{
	return FELDebugMenuRootDefaultParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FELDebugMenuRootDefaultParam(FELDebugMenuRootDefaultParam::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("ELDebugMenuRootDefaultParam"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFELDebugMenuRootDefaultParam
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFELDebugMenuRootDefaultParam()
	{
		UScriptStruct::DeferCppStructOps<FELDebugMenuRootDefaultParam>(FName(TEXT("ELDebugMenuRootDefaultParam")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFELDebugMenuRootDefaultParam;
	struct Z_Construct_UScriptStruct_FELDebugMenuRootDefaultParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PosX_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PosX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PosY_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PosY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SizeX_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SizeX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SizeY_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SizeY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Title_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Title;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StringTableNameSpace_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StringTableNameSpace;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MenuType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MenuType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MenuType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELDebugMenuRootDefaultParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELDebugMenuRootDefaultParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FELDebugMenuRootDefaultParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FELDebugMenuRootDefaultParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELDebugMenuRootDefaultParam_Statics::NewProp_PosX_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELDebugMenuRootDefaultParam" },
		{ "ModuleRelativePath", "Public/ELDebugMenuRootDefaultParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELDebugMenuRootDefaultParam_Statics::NewProp_PosX = { "PosX", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELDebugMenuRootDefaultParam, PosX), METADATA_PARAMS(Z_Construct_UScriptStruct_FELDebugMenuRootDefaultParam_Statics::NewProp_PosX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELDebugMenuRootDefaultParam_Statics::NewProp_PosX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELDebugMenuRootDefaultParam_Statics::NewProp_PosY_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELDebugMenuRootDefaultParam" },
		{ "ModuleRelativePath", "Public/ELDebugMenuRootDefaultParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELDebugMenuRootDefaultParam_Statics::NewProp_PosY = { "PosY", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELDebugMenuRootDefaultParam, PosY), METADATA_PARAMS(Z_Construct_UScriptStruct_FELDebugMenuRootDefaultParam_Statics::NewProp_PosY_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELDebugMenuRootDefaultParam_Statics::NewProp_PosY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELDebugMenuRootDefaultParam_Statics::NewProp_SizeX_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELDebugMenuRootDefaultParam" },
		{ "ModuleRelativePath", "Public/ELDebugMenuRootDefaultParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELDebugMenuRootDefaultParam_Statics::NewProp_SizeX = { "SizeX", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELDebugMenuRootDefaultParam, SizeX), METADATA_PARAMS(Z_Construct_UScriptStruct_FELDebugMenuRootDefaultParam_Statics::NewProp_SizeX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELDebugMenuRootDefaultParam_Statics::NewProp_SizeX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELDebugMenuRootDefaultParam_Statics::NewProp_SizeY_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELDebugMenuRootDefaultParam" },
		{ "ModuleRelativePath", "Public/ELDebugMenuRootDefaultParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELDebugMenuRootDefaultParam_Statics::NewProp_SizeY = { "SizeY", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELDebugMenuRootDefaultParam, SizeY), METADATA_PARAMS(Z_Construct_UScriptStruct_FELDebugMenuRootDefaultParam_Statics::NewProp_SizeY_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELDebugMenuRootDefaultParam_Statics::NewProp_SizeY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELDebugMenuRootDefaultParam_Statics::NewProp_Title_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELDebugMenuRootDefaultParam" },
		{ "ModuleRelativePath", "Public/ELDebugMenuRootDefaultParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FELDebugMenuRootDefaultParam_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELDebugMenuRootDefaultParam, Title), METADATA_PARAMS(Z_Construct_UScriptStruct_FELDebugMenuRootDefaultParam_Statics::NewProp_Title_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELDebugMenuRootDefaultParam_Statics::NewProp_Title_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELDebugMenuRootDefaultParam_Statics::NewProp_StringTableNameSpace_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELDebugMenuRootDefaultParam" },
		{ "ModuleRelativePath", "Public/ELDebugMenuRootDefaultParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FELDebugMenuRootDefaultParam_Statics::NewProp_StringTableNameSpace = { "StringTableNameSpace", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELDebugMenuRootDefaultParam, StringTableNameSpace), METADATA_PARAMS(Z_Construct_UScriptStruct_FELDebugMenuRootDefaultParam_Statics::NewProp_StringTableNameSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELDebugMenuRootDefaultParam_Statics::NewProp_StringTableNameSpace_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FELDebugMenuRootDefaultParam_Statics::NewProp_MenuType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELDebugMenuRootDefaultParam_Statics::NewProp_MenuType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELDebugMenuRootDefaultParam" },
		{ "ModuleRelativePath", "Public/ELDebugMenuRootDefaultParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FELDebugMenuRootDefaultParam_Statics::NewProp_MenuType = { "MenuType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELDebugMenuRootDefaultParam, MenuType), Z_Construct_UEnum_ABP_200508_EELDebugMenu_MenuType, METADATA_PARAMS(Z_Construct_UScriptStruct_FELDebugMenuRootDefaultParam_Statics::NewProp_MenuType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELDebugMenuRootDefaultParam_Statics::NewProp_MenuType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FELDebugMenuRootDefaultParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELDebugMenuRootDefaultParam_Statics::NewProp_PosX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELDebugMenuRootDefaultParam_Statics::NewProp_PosY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELDebugMenuRootDefaultParam_Statics::NewProp_SizeX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELDebugMenuRootDefaultParam_Statics::NewProp_SizeY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELDebugMenuRootDefaultParam_Statics::NewProp_Title,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELDebugMenuRootDefaultParam_Statics::NewProp_StringTableNameSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELDebugMenuRootDefaultParam_Statics::NewProp_MenuType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELDebugMenuRootDefaultParam_Statics::NewProp_MenuType,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FELDebugMenuRootDefaultParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"ELDebugMenuRootDefaultParam",
		sizeof(FELDebugMenuRootDefaultParam),
		alignof(FELDebugMenuRootDefaultParam),
		Z_Construct_UScriptStruct_FELDebugMenuRootDefaultParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELDebugMenuRootDefaultParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FELDebugMenuRootDefaultParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELDebugMenuRootDefaultParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FELDebugMenuRootDefaultParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FELDebugMenuRootDefaultParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ELDebugMenuRootDefaultParam"), sizeof(FELDebugMenuRootDefaultParam), Get_Z_Construct_UScriptStruct_FELDebugMenuRootDefaultParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FELDebugMenuRootDefaultParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FELDebugMenuRootDefaultParam_Hash() { return 1655752648U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
