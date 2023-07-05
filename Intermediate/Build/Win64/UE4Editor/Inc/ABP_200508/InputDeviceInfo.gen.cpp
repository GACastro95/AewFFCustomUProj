// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/InputDeviceInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputDeviceInfo() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FInputDeviceInfo();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
class UScriptStruct* FInputDeviceInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FInputDeviceInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputDeviceInfo, Z_Construct_UPackage__Script_ABP_200508(), TEXT("InputDeviceInfo"), sizeof(FInputDeviceInfo), Get_Z_Construct_UScriptStruct_FInputDeviceInfo_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FInputDeviceInfo>()
{
	return FInputDeviceInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FInputDeviceInfo(FInputDeviceInfo::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("InputDeviceInfo"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFInputDeviceInfo
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFInputDeviceInfo()
	{
		UScriptStruct::DeferCppStructOps<FInputDeviceInfo>(FName(TEXT("InputDeviceInfo")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFInputDeviceInfo;
	struct Z_Construct_UScriptStruct_FInputDeviceInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ControllerId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ControllerId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_UserName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CheckedUser_MetaData[];
#endif
		static void NewProp_CheckedUser_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CheckedUser;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HostPad_MetaData[];
#endif
		static void NewProp_HostPad_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_HostPad;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputDeviceInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/InputDeviceInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInputDeviceInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputDeviceInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputDeviceInfo_Statics::NewProp_ControllerId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "InputDeviceInfo" },
		{ "ModuleRelativePath", "Public/InputDeviceInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInputDeviceInfo_Statics::NewProp_ControllerId = { "ControllerId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInputDeviceInfo, ControllerId), METADATA_PARAMS(Z_Construct_UScriptStruct_FInputDeviceInfo_Statics::NewProp_ControllerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputDeviceInfo_Statics::NewProp_ControllerId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputDeviceInfo_Statics::NewProp_UserName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "InputDeviceInfo" },
		{ "ModuleRelativePath", "Public/InputDeviceInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FInputDeviceInfo_Statics::NewProp_UserName = { "UserName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInputDeviceInfo, UserName), METADATA_PARAMS(Z_Construct_UScriptStruct_FInputDeviceInfo_Statics::NewProp_UserName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputDeviceInfo_Statics::NewProp_UserName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputDeviceInfo_Statics::NewProp_CheckedUser_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "InputDeviceInfo" },
		{ "ModuleRelativePath", "Public/InputDeviceInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FInputDeviceInfo_Statics::NewProp_CheckedUser_SetBit(void* Obj)
	{
		((FInputDeviceInfo*)Obj)->CheckedUser = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInputDeviceInfo_Statics::NewProp_CheckedUser = { "CheckedUser", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FInputDeviceInfo), &Z_Construct_UScriptStruct_FInputDeviceInfo_Statics::NewProp_CheckedUser_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FInputDeviceInfo_Statics::NewProp_CheckedUser_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputDeviceInfo_Statics::NewProp_CheckedUser_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputDeviceInfo_Statics::NewProp_HostPad_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "InputDeviceInfo" },
		{ "ModuleRelativePath", "Public/InputDeviceInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FInputDeviceInfo_Statics::NewProp_HostPad_SetBit(void* Obj)
	{
		((FInputDeviceInfo*)Obj)->HostPad = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInputDeviceInfo_Statics::NewProp_HostPad = { "HostPad", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FInputDeviceInfo), &Z_Construct_UScriptStruct_FInputDeviceInfo_Statics::NewProp_HostPad_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FInputDeviceInfo_Statics::NewProp_HostPad_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputDeviceInfo_Statics::NewProp_HostPad_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInputDeviceInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputDeviceInfo_Statics::NewProp_ControllerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputDeviceInfo_Statics::NewProp_UserName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputDeviceInfo_Statics::NewProp_CheckedUser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputDeviceInfo_Statics::NewProp_HostPad,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInputDeviceInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"InputDeviceInfo",
		sizeof(FInputDeviceInfo),
		alignof(FInputDeviceInfo),
		Z_Construct_UScriptStruct_FInputDeviceInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputDeviceInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInputDeviceInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputDeviceInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInputDeviceInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FInputDeviceInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("InputDeviceInfo"), sizeof(FInputDeviceInfo), Get_Z_Construct_UScriptStruct_FInputDeviceInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FInputDeviceInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FInputDeviceInfo_Hash() { return 3301086442U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
