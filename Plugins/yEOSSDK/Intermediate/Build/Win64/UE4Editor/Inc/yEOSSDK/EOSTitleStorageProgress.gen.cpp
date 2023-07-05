// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EOSTitleStorageProgress.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSTitleStorageProgress() {}
// Cross Module References
	YEOSSDK_API UScriptStruct* Z_Construct_UScriptStruct_FEOSTitleStorageProgress();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSTitleStorageBinary_NoRegister();
// End Cross Module References
class UScriptStruct* FEOSTitleStorageProgress::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern YEOSSDK_API uint32 Get_Z_Construct_UScriptStruct_FEOSTitleStorageProgress_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEOSTitleStorageProgress, Z_Construct_UPackage__Script_yEOSSDK(), TEXT("EOSTitleStorageProgress"), sizeof(FEOSTitleStorageProgress), Get_Z_Construct_UScriptStruct_FEOSTitleStorageProgress_Hash());
	}
	return Singleton;
}
template<> YEOSSDK_API UScriptStruct* StaticStruct<FEOSTitleStorageProgress>()
{
	return FEOSTitleStorageProgress::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEOSTitleStorageProgress(FEOSTitleStorageProgress::StaticStruct, TEXT("/Script/yEOSSDK"), TEXT("EOSTitleStorageProgress"), false, nullptr, nullptr);
static struct FScriptStruct_yEOSSDK_StaticRegisterNativesFEOSTitleStorageProgress
{
	FScriptStruct_yEOSSDK_StaticRegisterNativesFEOSTitleStorageProgress()
	{
		UScriptStruct::DeferCppStructOps<FEOSTitleStorageProgress>(FName(TEXT("EOSTitleStorageProgress")));
	}
} ScriptStruct_yEOSSDK_StaticRegisterNativesFEOSTitleStorageProgress;
	struct Z_Construct_UScriptStruct_FEOSTitleStorageProgress_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Filename_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Filename;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Binary_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Binary;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransferredFileSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TransferredFileSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Progress_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Progress;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Canceled_MetaData[];
#endif
		static void NewProp_Canceled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Canceled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoRemove_MetaData[];
#endif
		static void NewProp_AutoRemove_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AutoRemove;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSTitleStorageProgress_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EOSTitleStorageProgress.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEOSTitleStorageProgress_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEOSTitleStorageProgress>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSTitleStorageProgress_Statics::NewProp_Filename_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSTitleStorageProgress" },
		{ "ModuleRelativePath", "Public/EOSTitleStorageProgress.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEOSTitleStorageProgress_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSTitleStorageProgress, Filename), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSTitleStorageProgress_Statics::NewProp_Filename_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSTitleStorageProgress_Statics::NewProp_Filename_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSTitleStorageProgress_Statics::NewProp_Binary_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSTitleStorageProgress" },
		{ "ModuleRelativePath", "Public/EOSTitleStorageProgress.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEOSTitleStorageProgress_Statics::NewProp_Binary = { "Binary", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSTitleStorageProgress, Binary), Z_Construct_UClass_UEOSTitleStorageBinary_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSTitleStorageProgress_Statics::NewProp_Binary_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSTitleStorageProgress_Statics::NewProp_Binary_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSTitleStorageProgress_Statics::NewProp_TransferredFileSize_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSTitleStorageProgress" },
		{ "ModuleRelativePath", "Public/EOSTitleStorageProgress.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSTitleStorageProgress_Statics::NewProp_TransferredFileSize = { "TransferredFileSize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSTitleStorageProgress, TransferredFileSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSTitleStorageProgress_Statics::NewProp_TransferredFileSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSTitleStorageProgress_Statics::NewProp_TransferredFileSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSTitleStorageProgress_Statics::NewProp_Progress_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSTitleStorageProgress" },
		{ "ModuleRelativePath", "Public/EOSTitleStorageProgress.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEOSTitleStorageProgress_Statics::NewProp_Progress = { "Progress", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSTitleStorageProgress, Progress), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSTitleStorageProgress_Statics::NewProp_Progress_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSTitleStorageProgress_Statics::NewProp_Progress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSTitleStorageProgress_Statics::NewProp_Canceled_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSTitleStorageProgress" },
		{ "ModuleRelativePath", "Public/EOSTitleStorageProgress.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FEOSTitleStorageProgress_Statics::NewProp_Canceled_SetBit(void* Obj)
	{
		((FEOSTitleStorageProgress*)Obj)->Canceled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEOSTitleStorageProgress_Statics::NewProp_Canceled = { "Canceled", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FEOSTitleStorageProgress), &Z_Construct_UScriptStruct_FEOSTitleStorageProgress_Statics::NewProp_Canceled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSTitleStorageProgress_Statics::NewProp_Canceled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSTitleStorageProgress_Statics::NewProp_Canceled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSTitleStorageProgress_Statics::NewProp_AutoRemove_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSTitleStorageProgress" },
		{ "ModuleRelativePath", "Public/EOSTitleStorageProgress.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FEOSTitleStorageProgress_Statics::NewProp_AutoRemove_SetBit(void* Obj)
	{
		((FEOSTitleStorageProgress*)Obj)->AutoRemove = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEOSTitleStorageProgress_Statics::NewProp_AutoRemove = { "AutoRemove", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FEOSTitleStorageProgress), &Z_Construct_UScriptStruct_FEOSTitleStorageProgress_Statics::NewProp_AutoRemove_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSTitleStorageProgress_Statics::NewProp_AutoRemove_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSTitleStorageProgress_Statics::NewProp_AutoRemove_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEOSTitleStorageProgress_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSTitleStorageProgress_Statics::NewProp_Filename,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSTitleStorageProgress_Statics::NewProp_Binary,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSTitleStorageProgress_Statics::NewProp_TransferredFileSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSTitleStorageProgress_Statics::NewProp_Progress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSTitleStorageProgress_Statics::NewProp_Canceled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSTitleStorageProgress_Statics::NewProp_AutoRemove,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEOSTitleStorageProgress_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_yEOSSDK,
		nullptr,
		&NewStructOps,
		"EOSTitleStorageProgress",
		sizeof(FEOSTitleStorageProgress),
		alignof(FEOSTitleStorageProgress),
		Z_Construct_UScriptStruct_FEOSTitleStorageProgress_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSTitleStorageProgress_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSTitleStorageProgress_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSTitleStorageProgress_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEOSTitleStorageProgress()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEOSTitleStorageProgress_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_yEOSSDK();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EOSTitleStorageProgress"), sizeof(FEOSTitleStorageProgress), Get_Z_Construct_UScriptStruct_FEOSTitleStorageProgress_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEOSTitleStorageProgress_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEOSTitleStorageProgress_Hash() { return 436730550U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
