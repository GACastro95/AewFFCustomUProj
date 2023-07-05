// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SSPrepareMovieStack.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSPrepareMovieStack() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSPrepareMovieStack();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EPlayMovieDelayTimeType();
// End Cross Module References
class UScriptStruct* FSSPrepareMovieStack::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FSSPrepareMovieStack_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSSPrepareMovieStack, Z_Construct_UPackage__Script_ABP_200508(), TEXT("SSPrepareMovieStack"), sizeof(FSSPrepareMovieStack), Get_Z_Construct_UScriptStruct_FSSPrepareMovieStack_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FSSPrepareMovieStack>()
{
	return FSSPrepareMovieStack::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSSPrepareMovieStack(FSSPrepareMovieStack::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("SSPrepareMovieStack"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFSSPrepareMovieStack
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFSSPrepareMovieStack()
	{
		UScriptStruct::DeferCppStructOps<FSSPrepareMovieStack>(FName(TEXT("SSPrepareMovieStack")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFSSPrepareMovieStack;
	struct Z_Construct_UScriptStruct_FSSPrepareMovieStack_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_stackMovieWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_stackMovieWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_stackSlotId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_stackSlotId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_stackDataName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_stackDataName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_stackAutoPlay_MetaData[];
#endif
		static void NewProp_stackAutoPlay_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_stackAutoPlay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_stackPlayLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_stackPlayLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_stackPlayTotalLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_stackPlayTotalLength;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_stackPlayDelayType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_stackPlayDelayType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_stackPlayDelayType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_stackPlayUniqueId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_stackPlayUniqueId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSPrepareMovieStack_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SSPrepareMovieStack.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSSPrepareMovieStack_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSSPrepareMovieStack>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSPrepareMovieStack_Statics::NewProp_stackMovieWidget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSPrepareMovieStack" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SSPrepareMovieStack.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSSPrepareMovieStack_Statics::NewProp_stackMovieWidget = { "stackMovieWidget", nullptr, (EPropertyFlags)0x001200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSPrepareMovieStack, stackMovieWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSPrepareMovieStack_Statics::NewProp_stackMovieWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSPrepareMovieStack_Statics::NewProp_stackMovieWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSPrepareMovieStack_Statics::NewProp_stackSlotId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSPrepareMovieStack" },
		{ "ModuleRelativePath", "Public/SSPrepareMovieStack.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSPrepareMovieStack_Statics::NewProp_stackSlotId = { "stackSlotId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSPrepareMovieStack, stackSlotId), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSPrepareMovieStack_Statics::NewProp_stackSlotId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSPrepareMovieStack_Statics::NewProp_stackSlotId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSPrepareMovieStack_Statics::NewProp_stackDataName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSPrepareMovieStack" },
		{ "ModuleRelativePath", "Public/SSPrepareMovieStack.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSSPrepareMovieStack_Statics::NewProp_stackDataName = { "stackDataName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSPrepareMovieStack, stackDataName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSPrepareMovieStack_Statics::NewProp_stackDataName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSPrepareMovieStack_Statics::NewProp_stackDataName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSPrepareMovieStack_Statics::NewProp_stackAutoPlay_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSPrepareMovieStack" },
		{ "ModuleRelativePath", "Public/SSPrepareMovieStack.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSSPrepareMovieStack_Statics::NewProp_stackAutoPlay_SetBit(void* Obj)
	{
		((FSSPrepareMovieStack*)Obj)->stackAutoPlay = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSSPrepareMovieStack_Statics::NewProp_stackAutoPlay = { "stackAutoPlay", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSSPrepareMovieStack), &Z_Construct_UScriptStruct_FSSPrepareMovieStack_Statics::NewProp_stackAutoPlay_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSPrepareMovieStack_Statics::NewProp_stackAutoPlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSPrepareMovieStack_Statics::NewProp_stackAutoPlay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSPrepareMovieStack_Statics::NewProp_stackPlayLength_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSPrepareMovieStack" },
		{ "ModuleRelativePath", "Public/SSPrepareMovieStack.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSPrepareMovieStack_Statics::NewProp_stackPlayLength = { "stackPlayLength", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSPrepareMovieStack, stackPlayLength), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSPrepareMovieStack_Statics::NewProp_stackPlayLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSPrepareMovieStack_Statics::NewProp_stackPlayLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSPrepareMovieStack_Statics::NewProp_stackPlayTotalLength_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSPrepareMovieStack" },
		{ "ModuleRelativePath", "Public/SSPrepareMovieStack.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSPrepareMovieStack_Statics::NewProp_stackPlayTotalLength = { "stackPlayTotalLength", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSPrepareMovieStack, stackPlayTotalLength), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSPrepareMovieStack_Statics::NewProp_stackPlayTotalLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSPrepareMovieStack_Statics::NewProp_stackPlayTotalLength_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSSPrepareMovieStack_Statics::NewProp_stackPlayDelayType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSPrepareMovieStack_Statics::NewProp_stackPlayDelayType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSPrepareMovieStack" },
		{ "ModuleRelativePath", "Public/SSPrepareMovieStack.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSSPrepareMovieStack_Statics::NewProp_stackPlayDelayType = { "stackPlayDelayType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSPrepareMovieStack, stackPlayDelayType), Z_Construct_UEnum_ABP_200508_EPlayMovieDelayTimeType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSPrepareMovieStack_Statics::NewProp_stackPlayDelayType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSPrepareMovieStack_Statics::NewProp_stackPlayDelayType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSPrepareMovieStack_Statics::NewProp_stackPlayUniqueId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSPrepareMovieStack" },
		{ "ModuleRelativePath", "Public/SSPrepareMovieStack.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSSPrepareMovieStack_Statics::NewProp_stackPlayUniqueId = { "stackPlayUniqueId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSPrepareMovieStack, stackPlayUniqueId), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSPrepareMovieStack_Statics::NewProp_stackPlayUniqueId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSPrepareMovieStack_Statics::NewProp_stackPlayUniqueId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSSPrepareMovieStack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSPrepareMovieStack_Statics::NewProp_stackMovieWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSPrepareMovieStack_Statics::NewProp_stackSlotId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSPrepareMovieStack_Statics::NewProp_stackDataName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSPrepareMovieStack_Statics::NewProp_stackAutoPlay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSPrepareMovieStack_Statics::NewProp_stackPlayLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSPrepareMovieStack_Statics::NewProp_stackPlayTotalLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSPrepareMovieStack_Statics::NewProp_stackPlayDelayType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSPrepareMovieStack_Statics::NewProp_stackPlayDelayType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSPrepareMovieStack_Statics::NewProp_stackPlayUniqueId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSSPrepareMovieStack_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"SSPrepareMovieStack",
		sizeof(FSSPrepareMovieStack),
		alignof(FSSPrepareMovieStack),
		Z_Construct_UScriptStruct_FSSPrepareMovieStack_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSPrepareMovieStack_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSSPrepareMovieStack_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSPrepareMovieStack_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSSPrepareMovieStack()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSSPrepareMovieStack_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SSPrepareMovieStack"), sizeof(FSSPrepareMovieStack), Get_Z_Construct_UScriptStruct_FSSPrepareMovieStack_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSSPrepareMovieStack_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSSPrepareMovieStack_Hash() { return 4066031004U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
