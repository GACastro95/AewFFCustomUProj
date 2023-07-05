// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EOSSessionP2PAFBindPlayers.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSSessionP2PAFBindPlayers() {}
// Cross Module References
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSSessionP2PAFBindPlayers_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSSessionP2PAFBindPlayers();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSSessionP2PAdditionalFunctionBase();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSSessionP2PMemberInfoPacket_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UEOSSessionP2PAFBindPlayers::execGetMemberInfo)
	{
		P_GET_OBJECT_REF(UEOSSessionP2PMemberInfoPacket,Z_Param_Out__pcMemberInfos);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetMemberInfo(Z_Param_Out__pcMemberInfos);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2PAFBindPlayers::execRetrySendMemberInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RetrySendMemberInfo();
		P_NATIVE_END;
	}
	void UEOSSessionP2PAFBindPlayers::StaticRegisterNativesUEOSSessionP2PAFBindPlayers()
	{
		UClass* Class = UEOSSessionP2PAFBindPlayers::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMemberInfo", &UEOSSessionP2PAFBindPlayers::execGetMemberInfo },
			{ "RetrySendMemberInfo", &UEOSSessionP2PAFBindPlayers::execRetrySendMemberInfo },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEOSSessionP2PAFBindPlayers_GetMemberInfo_Statics
	{
		struct EOSSessionP2PAFBindPlayers_eventGetMemberInfo_Parms
		{
			UEOSSessionP2PMemberInfoPacket* _pcMemberInfos;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcMemberInfos;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSSessionP2PAFBindPlayers_GetMemberInfo_Statics::NewProp__pcMemberInfos = { "_pcMemberInfos", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PAFBindPlayers_eventGetMemberInfo_Parms, _pcMemberInfos), Z_Construct_UClass_UEOSSessionP2PMemberInfoPacket_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSSessionP2PAFBindPlayers_GetMemberInfo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSessionP2PAFBindPlayers_eventGetMemberInfo_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionP2PAFBindPlayers_GetMemberInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionP2PAFBindPlayers_eventGetMemberInfo_Parms), &Z_Construct_UFunction_UEOSSessionP2PAFBindPlayers_GetMemberInfo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PAFBindPlayers_GetMemberInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PAFBindPlayers_GetMemberInfo_Statics::NewProp__pcMemberInfos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PAFBindPlayers_GetMemberInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PAFBindPlayers_GetMemberInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PAFBindPlayers.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PAFBindPlayers_GetMemberInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PAFBindPlayers, nullptr, "GetMemberInfo", nullptr, nullptr, sizeof(EOSSessionP2PAFBindPlayers_eventGetMemberInfo_Parms), Z_Construct_UFunction_UEOSSessionP2PAFBindPlayers_GetMemberInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PAFBindPlayers_GetMemberInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PAFBindPlayers_GetMemberInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PAFBindPlayers_GetMemberInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PAFBindPlayers_GetMemberInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PAFBindPlayers_GetMemberInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2PAFBindPlayers_RetrySendMemberInfo_Statics
	{
		struct EOSSessionP2PAFBindPlayers_eventRetrySendMemberInfo_Parms
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
	void Z_Construct_UFunction_UEOSSessionP2PAFBindPlayers_RetrySendMemberInfo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSessionP2PAFBindPlayers_eventRetrySendMemberInfo_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionP2PAFBindPlayers_RetrySendMemberInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionP2PAFBindPlayers_eventRetrySendMemberInfo_Parms), &Z_Construct_UFunction_UEOSSessionP2PAFBindPlayers_RetrySendMemberInfo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PAFBindPlayers_RetrySendMemberInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PAFBindPlayers_RetrySendMemberInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PAFBindPlayers_RetrySendMemberInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PAFBindPlayers.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PAFBindPlayers_RetrySendMemberInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PAFBindPlayers, nullptr, "RetrySendMemberInfo", nullptr, nullptr, sizeof(EOSSessionP2PAFBindPlayers_eventRetrySendMemberInfo_Parms), Z_Construct_UFunction_UEOSSessionP2PAFBindPlayers_RetrySendMemberInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PAFBindPlayers_RetrySendMemberInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PAFBindPlayers_RetrySendMemberInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PAFBindPlayers_RetrySendMemberInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PAFBindPlayers_RetrySendMemberInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PAFBindPlayers_RetrySendMemberInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEOSSessionP2PAFBindPlayers_NoRegister()
	{
		return UEOSSessionP2PAFBindPlayers::StaticClass();
	}
	struct Z_Construct_UClass_UEOSSessionP2PAFBindPlayers_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_pcMemberInfos_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_pcMemberInfos;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEOSSessionP2PAFBindPlayers_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSSessionP2PAdditionalFunctionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_yEOSSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEOSSessionP2PAFBindPlayers_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEOSSessionP2PAFBindPlayers_GetMemberInfo, "GetMemberInfo" }, // 1736106708
		{ &Z_Construct_UFunction_UEOSSessionP2PAFBindPlayers_RetrySendMemberInfo, "RetrySendMemberInfo" }, // 2512366838
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSSessionP2PAFBindPlayers_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EOSSessionP2PAFBindPlayers.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EOSSessionP2PAFBindPlayers.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSSessionP2PAFBindPlayers_Statics::NewProp_m_pcMemberInfos_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSSessionP2PAFBindPlayers" },
		{ "ModuleRelativePath", "Public/EOSSessionP2PAFBindPlayers.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEOSSessionP2PAFBindPlayers_Statics::NewProp_m_pcMemberInfos = { "m_pcMemberInfos", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSSessionP2PAFBindPlayers, m_pcMemberInfos), Z_Construct_UClass_UEOSSessionP2PMemberInfoPacket_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEOSSessionP2PAFBindPlayers_Statics::NewProp_m_pcMemberInfos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSSessionP2PAFBindPlayers_Statics::NewProp_m_pcMemberInfos_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEOSSessionP2PAFBindPlayers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSSessionP2PAFBindPlayers_Statics::NewProp_m_pcMemberInfos,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSSessionP2PAFBindPlayers_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSSessionP2PAFBindPlayers>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSSessionP2PAFBindPlayers_Statics::ClassParams = {
		&UEOSSessionP2PAFBindPlayers::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEOSSessionP2PAFBindPlayers_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEOSSessionP2PAFBindPlayers_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEOSSessionP2PAFBindPlayers_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSSessionP2PAFBindPlayers_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSSessionP2PAFBindPlayers()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSSessionP2PAFBindPlayers_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSSessionP2PAFBindPlayers, 1933681329);
	template<> YEOSSDK_API UClass* StaticClass<UEOSSessionP2PAFBindPlayers>()
	{
		return UEOSSessionP2PAFBindPlayers::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSSessionP2PAFBindPlayers(Z_Construct_UClass_UEOSSessionP2PAFBindPlayers, &UEOSSessionP2PAFBindPlayers::StaticClass, TEXT("/Script/yEOSSDK"), TEXT("UEOSSessionP2PAFBindPlayers"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSSessionP2PAFBindPlayers);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
