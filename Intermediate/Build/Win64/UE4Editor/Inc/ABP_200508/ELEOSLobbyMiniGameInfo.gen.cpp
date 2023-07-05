// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELEOSLobbyMiniGameInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELEOSLobbyMiniGameInfo() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELEOSLobbyMiniGameInfo_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELEOSLobbyMiniGameInfo();
	ABP_200508_API UClass* Z_Construct_UClass_ULobbyPacketBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EMiniGameID();
// End Cross Module References
	DEFINE_FUNCTION(UELEOSLobbyMiniGameInfo::execGetMiniGameUnlockInfo)
	{
		P_GET_TMAP_REF(EMiniGameID,bool,Z_Param_Out_OutMiniGameUnlockInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetMiniGameUnlockInfo(Z_Param_Out_OutMiniGameUnlockInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSLobbyMiniGameInfo::execSetMiniGameUnlockInfo)
	{
		P_GET_ENUM(EMiniGameID,Z_Param_MiniGameId);
		P_GET_UBOOL(Z_Param_Unlock);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMiniGameUnlockInfo(EMiniGameID(Z_Param_MiniGameId),Z_Param_Unlock);
		P_NATIVE_END;
	}
	void UELEOSLobbyMiniGameInfo::StaticRegisterNativesUELEOSLobbyMiniGameInfo()
	{
		UClass* Class = UELEOSLobbyMiniGameInfo::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMiniGameUnlockInfo", &UELEOSLobbyMiniGameInfo::execGetMiniGameUnlockInfo },
			{ "SetMiniGameUnlockInfo", &UELEOSLobbyMiniGameInfo::execSetMiniGameUnlockInfo },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELEOSLobbyMiniGameInfo_GetMiniGameUnlockInfo_Statics
	{
		struct ELEOSLobbyMiniGameInfo_eventGetMiniGameUnlockInfo_Parms
		{
			TMap<EMiniGameID,bool> OutMiniGameUnlockInfo;
		};
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_OutMiniGameUnlockInfo_ValueProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OutMiniGameUnlockInfo_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OutMiniGameUnlockInfo_Key_KeyProp;
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_OutMiniGameUnlockInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELEOSLobbyMiniGameInfo_GetMiniGameUnlockInfo_Statics::NewProp_OutMiniGameUnlockInfo_ValueProp = { "OutMiniGameUnlockInfo", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELEOSLobbyMiniGameInfo_GetMiniGameUnlockInfo_Statics::NewProp_OutMiniGameUnlockInfo_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELEOSLobbyMiniGameInfo_GetMiniGameUnlockInfo_Statics::NewProp_OutMiniGameUnlockInfo_Key_KeyProp = { "OutMiniGameUnlockInfo_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_ABP_200508_EMiniGameID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UELEOSLobbyMiniGameInfo_GetMiniGameUnlockInfo_Statics::NewProp_OutMiniGameUnlockInfo = { "OutMiniGameUnlockInfo", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSLobbyMiniGameInfo_eventGetMiniGameUnlockInfo_Parms, OutMiniGameUnlockInfo), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSLobbyMiniGameInfo_GetMiniGameUnlockInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSLobbyMiniGameInfo_GetMiniGameUnlockInfo_Statics::NewProp_OutMiniGameUnlockInfo_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSLobbyMiniGameInfo_GetMiniGameUnlockInfo_Statics::NewProp_OutMiniGameUnlockInfo_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSLobbyMiniGameInfo_GetMiniGameUnlockInfo_Statics::NewProp_OutMiniGameUnlockInfo_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSLobbyMiniGameInfo_GetMiniGameUnlockInfo_Statics::NewProp_OutMiniGameUnlockInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSLobbyMiniGameInfo_GetMiniGameUnlockInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSLobbyMiniGameInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSLobbyMiniGameInfo_GetMiniGameUnlockInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSLobbyMiniGameInfo, nullptr, "GetMiniGameUnlockInfo", nullptr, nullptr, sizeof(ELEOSLobbyMiniGameInfo_eventGetMiniGameUnlockInfo_Parms), Z_Construct_UFunction_UELEOSLobbyMiniGameInfo_GetMiniGameUnlockInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSLobbyMiniGameInfo_GetMiniGameUnlockInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSLobbyMiniGameInfo_GetMiniGameUnlockInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSLobbyMiniGameInfo_GetMiniGameUnlockInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSLobbyMiniGameInfo_GetMiniGameUnlockInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSLobbyMiniGameInfo_GetMiniGameUnlockInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSLobbyMiniGameInfo_SetMiniGameUnlockInfo_Statics
	{
		struct ELEOSLobbyMiniGameInfo_eventSetMiniGameUnlockInfo_Parms
		{
			EMiniGameID MiniGameId;
			bool Unlock;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MiniGameId_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MiniGameId;
		static void NewProp_Unlock_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Unlock;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELEOSLobbyMiniGameInfo_SetMiniGameUnlockInfo_Statics::NewProp_MiniGameId_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELEOSLobbyMiniGameInfo_SetMiniGameUnlockInfo_Statics::NewProp_MiniGameId = { "MiniGameId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSLobbyMiniGameInfo_eventSetMiniGameUnlockInfo_Parms, MiniGameId), Z_Construct_UEnum_ABP_200508_EMiniGameID, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELEOSLobbyMiniGameInfo_SetMiniGameUnlockInfo_Statics::NewProp_Unlock_SetBit(void* Obj)
	{
		((ELEOSLobbyMiniGameInfo_eventSetMiniGameUnlockInfo_Parms*)Obj)->Unlock = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELEOSLobbyMiniGameInfo_SetMiniGameUnlockInfo_Statics::NewProp_Unlock = { "Unlock", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEOSLobbyMiniGameInfo_eventSetMiniGameUnlockInfo_Parms), &Z_Construct_UFunction_UELEOSLobbyMiniGameInfo_SetMiniGameUnlockInfo_Statics::NewProp_Unlock_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSLobbyMiniGameInfo_SetMiniGameUnlockInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSLobbyMiniGameInfo_SetMiniGameUnlockInfo_Statics::NewProp_MiniGameId_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSLobbyMiniGameInfo_SetMiniGameUnlockInfo_Statics::NewProp_MiniGameId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSLobbyMiniGameInfo_SetMiniGameUnlockInfo_Statics::NewProp_Unlock,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSLobbyMiniGameInfo_SetMiniGameUnlockInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSLobbyMiniGameInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSLobbyMiniGameInfo_SetMiniGameUnlockInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSLobbyMiniGameInfo, nullptr, "SetMiniGameUnlockInfo", nullptr, nullptr, sizeof(ELEOSLobbyMiniGameInfo_eventSetMiniGameUnlockInfo_Parms), Z_Construct_UFunction_UELEOSLobbyMiniGameInfo_SetMiniGameUnlockInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSLobbyMiniGameInfo_SetMiniGameUnlockInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSLobbyMiniGameInfo_SetMiniGameUnlockInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSLobbyMiniGameInfo_SetMiniGameUnlockInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSLobbyMiniGameInfo_SetMiniGameUnlockInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSLobbyMiniGameInfo_SetMiniGameUnlockInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELEOSLobbyMiniGameInfo_NoRegister()
	{
		return UELEOSLobbyMiniGameInfo::StaticClass();
	}
	struct Z_Construct_UClass_UELEOSLobbyMiniGameInfo_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwnerPUID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OwnerPUID;
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_MiniGameUnlockInfo_ValueProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MiniGameUnlockInfo_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MiniGameUnlockInfo_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MiniGameUnlockInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_MiniGameUnlockInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELEOSLobbyMiniGameInfo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULobbyPacketBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELEOSLobbyMiniGameInfo_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELEOSLobbyMiniGameInfo_GetMiniGameUnlockInfo, "GetMiniGameUnlockInfo" }, // 2146567826
		{ &Z_Construct_UFunction_UELEOSLobbyMiniGameInfo_SetMiniGameUnlockInfo, "SetMiniGameUnlockInfo" }, // 3697336524
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELEOSLobbyMiniGameInfo_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELEOSLobbyMiniGameInfo.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELEOSLobbyMiniGameInfo.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELEOSLobbyMiniGameInfo_Statics::NewProp_OwnerPUID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEOSLobbyMiniGameInfo" },
		{ "ModuleRelativePath", "Public/ELEOSLobbyMiniGameInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UELEOSLobbyMiniGameInfo_Statics::NewProp_OwnerPUID = { "OwnerPUID", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELEOSLobbyMiniGameInfo, OwnerPUID), METADATA_PARAMS(Z_Construct_UClass_UELEOSLobbyMiniGameInfo_Statics::NewProp_OwnerPUID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELEOSLobbyMiniGameInfo_Statics::NewProp_OwnerPUID_MetaData)) };
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELEOSLobbyMiniGameInfo_Statics::NewProp_MiniGameUnlockInfo_ValueProp = { "MiniGameUnlockInfo", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UELEOSLobbyMiniGameInfo_Statics::NewProp_MiniGameUnlockInfo_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UELEOSLobbyMiniGameInfo_Statics::NewProp_MiniGameUnlockInfo_Key_KeyProp = { "MiniGameUnlockInfo_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_ABP_200508_EMiniGameID, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELEOSLobbyMiniGameInfo_Statics::NewProp_MiniGameUnlockInfo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEOSLobbyMiniGameInfo" },
		{ "ModuleRelativePath", "Public/ELEOSLobbyMiniGameInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UELEOSLobbyMiniGameInfo_Statics::NewProp_MiniGameUnlockInfo = { "MiniGameUnlockInfo", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELEOSLobbyMiniGameInfo, MiniGameUnlockInfo), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELEOSLobbyMiniGameInfo_Statics::NewProp_MiniGameUnlockInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELEOSLobbyMiniGameInfo_Statics::NewProp_MiniGameUnlockInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELEOSLobbyMiniGameInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELEOSLobbyMiniGameInfo_Statics::NewProp_OwnerPUID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELEOSLobbyMiniGameInfo_Statics::NewProp_MiniGameUnlockInfo_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELEOSLobbyMiniGameInfo_Statics::NewProp_MiniGameUnlockInfo_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELEOSLobbyMiniGameInfo_Statics::NewProp_MiniGameUnlockInfo_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELEOSLobbyMiniGameInfo_Statics::NewProp_MiniGameUnlockInfo,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELEOSLobbyMiniGameInfo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELEOSLobbyMiniGameInfo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELEOSLobbyMiniGameInfo_Statics::ClassParams = {
		&UELEOSLobbyMiniGameInfo::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELEOSLobbyMiniGameInfo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELEOSLobbyMiniGameInfo_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELEOSLobbyMiniGameInfo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELEOSLobbyMiniGameInfo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELEOSLobbyMiniGameInfo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELEOSLobbyMiniGameInfo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELEOSLobbyMiniGameInfo, 3995553364);
	template<> ABP_200508_API UClass* StaticClass<UELEOSLobbyMiniGameInfo>()
	{
		return UELEOSLobbyMiniGameInfo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELEOSLobbyMiniGameInfo(Z_Construct_UClass_UELEOSLobbyMiniGameInfo, &UELEOSLobbyMiniGameInfo::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELEOSLobbyMiniGameInfo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELEOSLobbyMiniGameInfo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
