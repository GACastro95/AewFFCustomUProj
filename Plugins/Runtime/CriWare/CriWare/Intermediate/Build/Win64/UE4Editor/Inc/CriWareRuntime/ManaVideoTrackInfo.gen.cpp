// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/ManaVideoTrackInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeManaVideoTrackInfo() {}
// Cross Module References
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FManaVideoTrackInfo();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_EManaMovieType();
// End Cross Module References
class UScriptStruct* FManaVideoTrackInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CRIWARERUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FManaVideoTrackInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FManaVideoTrackInfo, Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("ManaVideoTrackInfo"), sizeof(FManaVideoTrackInfo), Get_Z_Construct_UScriptStruct_FManaVideoTrackInfo_Hash());
	}
	return Singleton;
}
template<> CRIWARERUNTIME_API UScriptStruct* StaticStruct<FManaVideoTrackInfo>()
{
	return FManaVideoTrackInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FManaVideoTrackInfo(FManaVideoTrackInfo::StaticStruct, TEXT("/Script/CriWareRuntime"), TEXT("ManaVideoTrackInfo"), false, nullptr, nullptr);
static struct FScriptStruct_CriWareRuntime_StaticRegisterNativesFManaVideoTrackInfo
{
	FScriptStruct_CriWareRuntime_StaticRegisterNativesFManaVideoTrackInfo()
	{
		UScriptStruct::DeferCppStructOps<FManaVideoTrackInfo>(FName(TEXT("ManaVideoTrackInfo")));
	}
} ScriptStruct_CriWareRuntime_StaticRegisterNativesFManaVideoTrackInfo;
	struct Z_Construct_UScriptStruct_FManaVideoTrackInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextureDimensions_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TextureDimensions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayDimensions_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DisplayDimensions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrameRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FrameRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalFrames_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TotalFrames;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsAlpha_MetaData[];
#endif
		static void NewProp_bIsAlpha_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsAlpha;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManaVideoTrackInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ManaVideoTrackInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FManaVideoTrackInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FManaVideoTrackInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManaVideoTrackInfo_Statics::NewProp_TextureDimensions_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaVideoTrackInfo" },
		{ "ModuleRelativePath", "Public/ManaVideoTrackInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FManaVideoTrackInfo_Statics::NewProp_TextureDimensions = { "TextureDimensions", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FManaVideoTrackInfo, TextureDimensions), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UScriptStruct_FManaVideoTrackInfo_Statics::NewProp_TextureDimensions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManaVideoTrackInfo_Statics::NewProp_TextureDimensions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManaVideoTrackInfo_Statics::NewProp_DisplayDimensions_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaVideoTrackInfo" },
		{ "ModuleRelativePath", "Public/ManaVideoTrackInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FManaVideoTrackInfo_Statics::NewProp_DisplayDimensions = { "DisplayDimensions", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FManaVideoTrackInfo, DisplayDimensions), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UScriptStruct_FManaVideoTrackInfo_Statics::NewProp_DisplayDimensions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManaVideoTrackInfo_Statics::NewProp_DisplayDimensions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManaVideoTrackInfo_Statics::NewProp_FrameRate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaVideoTrackInfo" },
		{ "ModuleRelativePath", "Public/ManaVideoTrackInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FManaVideoTrackInfo_Statics::NewProp_FrameRate = { "FrameRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FManaVideoTrackInfo, FrameRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FManaVideoTrackInfo_Statics::NewProp_FrameRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManaVideoTrackInfo_Statics::NewProp_FrameRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManaVideoTrackInfo_Statics::NewProp_TotalFrames_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaVideoTrackInfo" },
		{ "ModuleRelativePath", "Public/ManaVideoTrackInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FManaVideoTrackInfo_Statics::NewProp_TotalFrames = { "TotalFrames", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FManaVideoTrackInfo, TotalFrames), METADATA_PARAMS(Z_Construct_UScriptStruct_FManaVideoTrackInfo_Statics::NewProp_TotalFrames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManaVideoTrackInfo_Statics::NewProp_TotalFrames_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManaVideoTrackInfo_Statics::NewProp_bIsAlpha_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaVideoTrackInfo" },
		{ "ModuleRelativePath", "Public/ManaVideoTrackInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FManaVideoTrackInfo_Statics::NewProp_bIsAlpha_SetBit(void* Obj)
	{
		((FManaVideoTrackInfo*)Obj)->bIsAlpha = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FManaVideoTrackInfo_Statics::NewProp_bIsAlpha = { "bIsAlpha", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FManaVideoTrackInfo), &Z_Construct_UScriptStruct_FManaVideoTrackInfo_Statics::NewProp_bIsAlpha_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FManaVideoTrackInfo_Statics::NewProp_bIsAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManaVideoTrackInfo_Statics::NewProp_bIsAlpha_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FManaVideoTrackInfo_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManaVideoTrackInfo_Statics::NewProp_Type_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaVideoTrackInfo" },
		{ "ModuleRelativePath", "Public/ManaVideoTrackInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FManaVideoTrackInfo_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FManaVideoTrackInfo, Type), Z_Construct_UEnum_CriWareRuntime_EManaMovieType, METADATA_PARAMS(Z_Construct_UScriptStruct_FManaVideoTrackInfo_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManaVideoTrackInfo_Statics::NewProp_Type_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FManaVideoTrackInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManaVideoTrackInfo_Statics::NewProp_TextureDimensions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManaVideoTrackInfo_Statics::NewProp_DisplayDimensions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManaVideoTrackInfo_Statics::NewProp_FrameRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManaVideoTrackInfo_Statics::NewProp_TotalFrames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManaVideoTrackInfo_Statics::NewProp_bIsAlpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManaVideoTrackInfo_Statics::NewProp_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManaVideoTrackInfo_Statics::NewProp_Type,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FManaVideoTrackInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
		nullptr,
		&NewStructOps,
		"ManaVideoTrackInfo",
		sizeof(FManaVideoTrackInfo),
		alignof(FManaVideoTrackInfo),
		Z_Construct_UScriptStruct_FManaVideoTrackInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManaVideoTrackInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FManaVideoTrackInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManaVideoTrackInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FManaVideoTrackInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FManaVideoTrackInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CriWareRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ManaVideoTrackInfo"), sizeof(FManaVideoTrackInfo), Get_Z_Construct_UScriptStruct_FManaVideoTrackInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FManaVideoTrackInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FManaVideoTrackInfo_Hash() { return 2016899419U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
