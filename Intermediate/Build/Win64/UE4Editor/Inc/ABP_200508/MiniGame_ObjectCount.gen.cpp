// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/MiniGame_ObjectCount.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMiniGame_ObjectCount() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FMiniGame_ObjectCount();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
class UScriptStruct* FMiniGame_ObjectCount::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FMiniGame_ObjectCount_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMiniGame_ObjectCount, Z_Construct_UPackage__Script_ABP_200508(), TEXT("MiniGame_ObjectCount"), sizeof(FMiniGame_ObjectCount), Get_Z_Construct_UScriptStruct_FMiniGame_ObjectCount_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FMiniGame_ObjectCount>()
{
	return FMiniGame_ObjectCount::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMiniGame_ObjectCount(FMiniGame_ObjectCount::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("MiniGame_ObjectCount"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFMiniGame_ObjectCount
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFMiniGame_ObjectCount()
	{
		UScriptStruct::DeferCppStructOps<FMiniGame_ObjectCount>(FName(TEXT("MiniGame_ObjectCount")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFMiniGame_ObjectCount;
	struct Z_Construct_UScriptStruct_FMiniGame_ObjectCount_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnArea_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SpawnArea;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ObjectNum_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectNum_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ObjectNum;
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ObjectEnable_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectEnable_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ObjectEnable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalNum_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TotalNum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsCameraStop_MetaData[];
#endif
		static void NewProp_IsCameraStop_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsCameraStop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsEnabledSpawn_MetaData[];
#endif
		static void NewProp_IsEnabledSpawn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsEnabledSpawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMiniGame_ObjectCount_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MiniGame_ObjectCount.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMiniGame_ObjectCount_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMiniGame_ObjectCount>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMiniGame_ObjectCount_Statics::NewProp_SpawnArea_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MiniGame_ObjectCount" },
		{ "ModuleRelativePath", "Public/MiniGame_ObjectCount.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMiniGame_ObjectCount_Statics::NewProp_SpawnArea = { "SpawnArea", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMiniGame_ObjectCount, SpawnArea), METADATA_PARAMS(Z_Construct_UScriptStruct_FMiniGame_ObjectCount_Statics::NewProp_SpawnArea_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMiniGame_ObjectCount_Statics::NewProp_SpawnArea_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMiniGame_ObjectCount_Statics::NewProp_ObjectNum_Inner = { "ObjectNum", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMiniGame_ObjectCount_Statics::NewProp_ObjectNum_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MiniGame_ObjectCount" },
		{ "ModuleRelativePath", "Public/MiniGame_ObjectCount.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMiniGame_ObjectCount_Statics::NewProp_ObjectNum = { "ObjectNum", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMiniGame_ObjectCount, ObjectNum), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMiniGame_ObjectCount_Statics::NewProp_ObjectNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMiniGame_ObjectCount_Statics::NewProp_ObjectNum_MetaData)) };
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMiniGame_ObjectCount_Statics::NewProp_ObjectEnable_Inner = { "ObjectEnable", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMiniGame_ObjectCount_Statics::NewProp_ObjectEnable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MiniGame_ObjectCount" },
		{ "ModuleRelativePath", "Public/MiniGame_ObjectCount.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMiniGame_ObjectCount_Statics::NewProp_ObjectEnable = { "ObjectEnable", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMiniGame_ObjectCount, ObjectEnable), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMiniGame_ObjectCount_Statics::NewProp_ObjectEnable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMiniGame_ObjectCount_Statics::NewProp_ObjectEnable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMiniGame_ObjectCount_Statics::NewProp_TotalNum_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MiniGame_ObjectCount" },
		{ "ModuleRelativePath", "Public/MiniGame_ObjectCount.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMiniGame_ObjectCount_Statics::NewProp_TotalNum = { "TotalNum", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMiniGame_ObjectCount, TotalNum), METADATA_PARAMS(Z_Construct_UScriptStruct_FMiniGame_ObjectCount_Statics::NewProp_TotalNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMiniGame_ObjectCount_Statics::NewProp_TotalNum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMiniGame_ObjectCount_Statics::NewProp_IsCameraStop_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MiniGame_ObjectCount" },
		{ "ModuleRelativePath", "Public/MiniGame_ObjectCount.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMiniGame_ObjectCount_Statics::NewProp_IsCameraStop_SetBit(void* Obj)
	{
		((FMiniGame_ObjectCount*)Obj)->IsCameraStop = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMiniGame_ObjectCount_Statics::NewProp_IsCameraStop = { "IsCameraStop", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMiniGame_ObjectCount), &Z_Construct_UScriptStruct_FMiniGame_ObjectCount_Statics::NewProp_IsCameraStop_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMiniGame_ObjectCount_Statics::NewProp_IsCameraStop_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMiniGame_ObjectCount_Statics::NewProp_IsCameraStop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMiniGame_ObjectCount_Statics::NewProp_IsEnabledSpawn_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MiniGame_ObjectCount" },
		{ "ModuleRelativePath", "Public/MiniGame_ObjectCount.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMiniGame_ObjectCount_Statics::NewProp_IsEnabledSpawn_SetBit(void* Obj)
	{
		((FMiniGame_ObjectCount*)Obj)->IsEnabledSpawn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMiniGame_ObjectCount_Statics::NewProp_IsEnabledSpawn = { "IsEnabledSpawn", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMiniGame_ObjectCount), &Z_Construct_UScriptStruct_FMiniGame_ObjectCount_Statics::NewProp_IsEnabledSpawn_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMiniGame_ObjectCount_Statics::NewProp_IsEnabledSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMiniGame_ObjectCount_Statics::NewProp_IsEnabledSpawn_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMiniGame_ObjectCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMiniGame_ObjectCount_Statics::NewProp_SpawnArea,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMiniGame_ObjectCount_Statics::NewProp_ObjectNum_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMiniGame_ObjectCount_Statics::NewProp_ObjectNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMiniGame_ObjectCount_Statics::NewProp_ObjectEnable_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMiniGame_ObjectCount_Statics::NewProp_ObjectEnable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMiniGame_ObjectCount_Statics::NewProp_TotalNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMiniGame_ObjectCount_Statics::NewProp_IsCameraStop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMiniGame_ObjectCount_Statics::NewProp_IsEnabledSpawn,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMiniGame_ObjectCount_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"MiniGame_ObjectCount",
		sizeof(FMiniGame_ObjectCount),
		alignof(FMiniGame_ObjectCount),
		Z_Construct_UScriptStruct_FMiniGame_ObjectCount_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMiniGame_ObjectCount_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMiniGame_ObjectCount_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMiniGame_ObjectCount_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMiniGame_ObjectCount()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMiniGame_ObjectCount_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MiniGame_ObjectCount"), sizeof(FMiniGame_ObjectCount), Get_Z_Construct_UScriptStruct_FMiniGame_ObjectCount_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMiniGame_ObjectCount_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMiniGame_ObjectCount_Hash() { return 3960375322U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
