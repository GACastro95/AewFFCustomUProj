// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EOSLobbyInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSLobbyInfo() {}
// Cross Module References
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSLobbyInfo_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSLobbyInfo();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSCommunityInfoBase();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
// End Cross Module References
	DEFINE_FUNCTION(UEOSLobbyInfo::execGetStringOfLobbyID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetStringOfLobbyID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSLobbyInfo::execIsRTCRoomEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsRTCRoomEnabled();
		P_NATIVE_END;
	}
	void UEOSLobbyInfo::StaticRegisterNativesUEOSLobbyInfo()
	{
		UClass* Class = UEOSLobbyInfo::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetStringOfLobbyID", &UEOSLobbyInfo::execGetStringOfLobbyID },
			{ "IsRTCRoomEnabled", &UEOSLobbyInfo::execIsRTCRoomEnabled },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEOSLobbyInfo_GetStringOfLobbyID_Statics
	{
		struct EOSLobbyInfo_eventGetStringOfLobbyID_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSLobbyInfo_GetStringOfLobbyID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSLobbyInfo_eventGetStringOfLobbyID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSLobbyInfo_GetStringOfLobbyID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSLobbyInfo_GetStringOfLobbyID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSLobbyInfo_GetStringOfLobbyID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSLobbyInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSLobbyInfo_GetStringOfLobbyID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSLobbyInfo, nullptr, "GetStringOfLobbyID", nullptr, nullptr, sizeof(EOSLobbyInfo_eventGetStringOfLobbyID_Parms), Z_Construct_UFunction_UEOSLobbyInfo_GetStringOfLobbyID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSLobbyInfo_GetStringOfLobbyID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSLobbyInfo_GetStringOfLobbyID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSLobbyInfo_GetStringOfLobbyID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSLobbyInfo_GetStringOfLobbyID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSLobbyInfo_GetStringOfLobbyID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSLobbyInfo_IsRTCRoomEnabled_Statics
	{
		struct EOSLobbyInfo_eventIsRTCRoomEnabled_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEOSLobbyInfo_IsRTCRoomEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSLobbyInfo_eventIsRTCRoomEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSLobbyInfo_IsRTCRoomEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSLobbyInfo_eventIsRTCRoomEnabled_Parms), &Z_Construct_UFunction_UEOSLobbyInfo_IsRTCRoomEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSLobbyInfo_IsRTCRoomEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSLobbyInfo_IsRTCRoomEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSLobbyInfo_IsRTCRoomEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSLobbyInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSLobbyInfo_IsRTCRoomEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSLobbyInfo, nullptr, "IsRTCRoomEnabled", nullptr, nullptr, sizeof(EOSLobbyInfo_eventIsRTCRoomEnabled_Parms), Z_Construct_UFunction_UEOSLobbyInfo_IsRTCRoomEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSLobbyInfo_IsRTCRoomEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSLobbyInfo_IsRTCRoomEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSLobbyInfo_IsRTCRoomEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSLobbyInfo_IsRTCRoomEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSLobbyInfo_IsRTCRoomEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEOSLobbyInfo_NoRegister()
	{
		return UEOSLobbyInfo::StaticClass();
	}
	struct Z_Construct_UClass_UEOSLobbyInfo_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_strRTCRoomName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_m_strRTCRoomName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEOSLobbyInfo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSCommunityInfoBase,
		(UObject* (*)())Z_Construct_UPackage__Script_yEOSSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEOSLobbyInfo_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEOSLobbyInfo_GetStringOfLobbyID, "GetStringOfLobbyID" }, // 2828756079
		{ &Z_Construct_UFunction_UEOSLobbyInfo_IsRTCRoomEnabled, "IsRTCRoomEnabled" }, // 2189226286
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSLobbyInfo_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EOSLobbyInfo.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EOSLobbyInfo.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSLobbyInfo_Statics::NewProp_m_strRTCRoomName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSLobbyInfo" },
		{ "ModuleRelativePath", "Public/EOSLobbyInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEOSLobbyInfo_Statics::NewProp_m_strRTCRoomName = { "m_strRTCRoomName", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSLobbyInfo, m_strRTCRoomName), METADATA_PARAMS(Z_Construct_UClass_UEOSLobbyInfo_Statics::NewProp_m_strRTCRoomName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSLobbyInfo_Statics::NewProp_m_strRTCRoomName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEOSLobbyInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSLobbyInfo_Statics::NewProp_m_strRTCRoomName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSLobbyInfo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSLobbyInfo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSLobbyInfo_Statics::ClassParams = {
		&UEOSLobbyInfo::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEOSLobbyInfo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEOSLobbyInfo_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEOSLobbyInfo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSLobbyInfo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSLobbyInfo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSLobbyInfo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSLobbyInfo, 1869086534);
	template<> YEOSSDK_API UClass* StaticClass<UEOSLobbyInfo>()
	{
		return UEOSLobbyInfo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSLobbyInfo(Z_Construct_UClass_UEOSLobbyInfo, &UEOSLobbyInfo::StaticClass, TEXT("/Script/yEOSSDK"), TEXT("UEOSLobbyInfo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSLobbyInfo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
