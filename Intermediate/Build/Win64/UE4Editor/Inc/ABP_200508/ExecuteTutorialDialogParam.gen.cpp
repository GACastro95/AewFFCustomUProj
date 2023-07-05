// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ExecuteTutorialDialogParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExecuteTutorialDialogParam() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FExecuteTutorialDialogParam();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ETutorialCategory();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FTutorialDialogResourceParam();
// End Cross Module References

static_assert(std::is_polymorphic<FExecuteTutorialDialogParam>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FExecuteTutorialDialogParam cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FExecuteTutorialDialogParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FExecuteTutorialDialogParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FExecuteTutorialDialogParam, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ExecuteTutorialDialogParam"), sizeof(FExecuteTutorialDialogParam), Get_Z_Construct_UScriptStruct_FExecuteTutorialDialogParam_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FExecuteTutorialDialogParam>()
{
	return FExecuteTutorialDialogParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FExecuteTutorialDialogParam(FExecuteTutorialDialogParam::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("ExecuteTutorialDialogParam"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFExecuteTutorialDialogParam
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFExecuteTutorialDialogParam()
	{
		UScriptStruct::DeferCppStructOps<FExecuteTutorialDialogParam>(FName(TEXT("ExecuteTutorialDialogParam")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFExecuteTutorialDialogParam;
	struct Z_Construct_UScriptStruct_FExecuteTutorialDialogParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Memo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Memo;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Category_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Category;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VoiceCueID_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_VoiceCueID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VoiceImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_VoiceImage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InvalidArchive_MetaData[];
#endif
		static void NewProp_InvalidArchive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InvalidArchive;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ResourceParamList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResourceParamList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ResourceParamList;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LinkUnlockableItemID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LinkUnlockableItemID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExecuteTutorialDialogParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ExecuteTutorialDialogParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FExecuteTutorialDialogParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FExecuteTutorialDialogParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExecuteTutorialDialogParam_Statics::NewProp_Memo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ExecuteTutorialDialogParam" },
		{ "ModuleRelativePath", "Public/ExecuteTutorialDialogParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FExecuteTutorialDialogParam_Statics::NewProp_Memo = { "Memo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FExecuteTutorialDialogParam, Memo), METADATA_PARAMS(Z_Construct_UScriptStruct_FExecuteTutorialDialogParam_Statics::NewProp_Memo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExecuteTutorialDialogParam_Statics::NewProp_Memo_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FExecuteTutorialDialogParam_Statics::NewProp_Category_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExecuteTutorialDialogParam_Statics::NewProp_Category_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ExecuteTutorialDialogParam" },
		{ "ModuleRelativePath", "Public/ExecuteTutorialDialogParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FExecuteTutorialDialogParam_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FExecuteTutorialDialogParam, Category), Z_Construct_UEnum_ABP_200508_ETutorialCategory, METADATA_PARAMS(Z_Construct_UScriptStruct_FExecuteTutorialDialogParam_Statics::NewProp_Category_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExecuteTutorialDialogParam_Statics::NewProp_Category_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExecuteTutorialDialogParam_Statics::NewProp_VoiceCueID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ExecuteTutorialDialogParam" },
		{ "ModuleRelativePath", "Public/ExecuteTutorialDialogParam.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FExecuteTutorialDialogParam_Statics::NewProp_VoiceCueID = { "VoiceCueID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FExecuteTutorialDialogParam, VoiceCueID), METADATA_PARAMS(Z_Construct_UScriptStruct_FExecuteTutorialDialogParam_Statics::NewProp_VoiceCueID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExecuteTutorialDialogParam_Statics::NewProp_VoiceCueID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExecuteTutorialDialogParam_Statics::NewProp_VoiceImage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ExecuteTutorialDialogParam" },
		{ "ModuleRelativePath", "Public/ExecuteTutorialDialogParam.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FExecuteTutorialDialogParam_Statics::NewProp_VoiceImage = { "VoiceImage", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FExecuteTutorialDialogParam, VoiceImage), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FExecuteTutorialDialogParam_Statics::NewProp_VoiceImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExecuteTutorialDialogParam_Statics::NewProp_VoiceImage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExecuteTutorialDialogParam_Statics::NewProp_InvalidArchive_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ExecuteTutorialDialogParam" },
		{ "ModuleRelativePath", "Public/ExecuteTutorialDialogParam.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FExecuteTutorialDialogParam_Statics::NewProp_InvalidArchive_SetBit(void* Obj)
	{
		((FExecuteTutorialDialogParam*)Obj)->InvalidArchive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FExecuteTutorialDialogParam_Statics::NewProp_InvalidArchive = { "InvalidArchive", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FExecuteTutorialDialogParam), &Z_Construct_UScriptStruct_FExecuteTutorialDialogParam_Statics::NewProp_InvalidArchive_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FExecuteTutorialDialogParam_Statics::NewProp_InvalidArchive_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExecuteTutorialDialogParam_Statics::NewProp_InvalidArchive_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FExecuteTutorialDialogParam_Statics::NewProp_ResourceParamList_Inner = { "ResourceParamList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTutorialDialogResourceParam, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExecuteTutorialDialogParam_Statics::NewProp_ResourceParamList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ExecuteTutorialDialogParam" },
		{ "ModuleRelativePath", "Public/ExecuteTutorialDialogParam.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FExecuteTutorialDialogParam_Statics::NewProp_ResourceParamList = { "ResourceParamList", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FExecuteTutorialDialogParam, ResourceParamList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FExecuteTutorialDialogParam_Statics::NewProp_ResourceParamList_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExecuteTutorialDialogParam_Statics::NewProp_ResourceParamList_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExecuteTutorialDialogParam_Statics::NewProp_LinkUnlockableItemID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ExecuteTutorialDialogParam" },
		{ "ModuleRelativePath", "Public/ExecuteTutorialDialogParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FExecuteTutorialDialogParam_Statics::NewProp_LinkUnlockableItemID = { "LinkUnlockableItemID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FExecuteTutorialDialogParam, LinkUnlockableItemID), METADATA_PARAMS(Z_Construct_UScriptStruct_FExecuteTutorialDialogParam_Statics::NewProp_LinkUnlockableItemID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExecuteTutorialDialogParam_Statics::NewProp_LinkUnlockableItemID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FExecuteTutorialDialogParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExecuteTutorialDialogParam_Statics::NewProp_Memo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExecuteTutorialDialogParam_Statics::NewProp_Category_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExecuteTutorialDialogParam_Statics::NewProp_Category,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExecuteTutorialDialogParam_Statics::NewProp_VoiceCueID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExecuteTutorialDialogParam_Statics::NewProp_VoiceImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExecuteTutorialDialogParam_Statics::NewProp_InvalidArchive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExecuteTutorialDialogParam_Statics::NewProp_ResourceParamList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExecuteTutorialDialogParam_Statics::NewProp_ResourceParamList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExecuteTutorialDialogParam_Statics::NewProp_LinkUnlockableItemID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FExecuteTutorialDialogParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"ExecuteTutorialDialogParam",
		sizeof(FExecuteTutorialDialogParam),
		alignof(FExecuteTutorialDialogParam),
		Z_Construct_UScriptStruct_FExecuteTutorialDialogParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExecuteTutorialDialogParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FExecuteTutorialDialogParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExecuteTutorialDialogParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FExecuteTutorialDialogParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FExecuteTutorialDialogParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ExecuteTutorialDialogParam"), sizeof(FExecuteTutorialDialogParam), Get_Z_Construct_UScriptStruct_FExecuteTutorialDialogParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FExecuteTutorialDialogParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FExecuteTutorialDialogParam_Hash() { return 4261778613U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
