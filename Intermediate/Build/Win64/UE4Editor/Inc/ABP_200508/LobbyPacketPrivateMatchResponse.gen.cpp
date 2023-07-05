// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/LobbyPacketPrivateMatchResponse.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLobbyPacketPrivateMatchResponse() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_ULobbyPacketPrivateMatchResponse_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_ULobbyPacketPrivateMatchResponse();
	ABP_200508_API UClass* Z_Construct_UClass_ULobbyPacketBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	DEFINE_FUNCTION(ULobbyPacketPrivateMatchResponse::execGetAccept)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetAccept();
		P_NATIVE_END;
	}
	void ULobbyPacketPrivateMatchResponse::StaticRegisterNativesULobbyPacketPrivateMatchResponse()
	{
		UClass* Class = ULobbyPacketPrivateMatchResponse::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAccept", &ULobbyPacketPrivateMatchResponse::execGetAccept },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULobbyPacketPrivateMatchResponse_GetAccept_Statics
	{
		struct LobbyPacketPrivateMatchResponse_eventGetAccept_Parms
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
	void Z_Construct_UFunction_ULobbyPacketPrivateMatchResponse_GetAccept_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LobbyPacketPrivateMatchResponse_eventGetAccept_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULobbyPacketPrivateMatchResponse_GetAccept_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LobbyPacketPrivateMatchResponse_eventGetAccept_Parms), &Z_Construct_UFunction_ULobbyPacketPrivateMatchResponse_GetAccept_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULobbyPacketPrivateMatchResponse_GetAccept_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULobbyPacketPrivateMatchResponse_GetAccept_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULobbyPacketPrivateMatchResponse_GetAccept_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LobbyPacketPrivateMatchResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULobbyPacketPrivateMatchResponse_GetAccept_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULobbyPacketPrivateMatchResponse, nullptr, "GetAccept", nullptr, nullptr, sizeof(LobbyPacketPrivateMatchResponse_eventGetAccept_Parms), Z_Construct_UFunction_ULobbyPacketPrivateMatchResponse_GetAccept_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULobbyPacketPrivateMatchResponse_GetAccept_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULobbyPacketPrivateMatchResponse_GetAccept_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULobbyPacketPrivateMatchResponse_GetAccept_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULobbyPacketPrivateMatchResponse_GetAccept()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULobbyPacketPrivateMatchResponse_GetAccept_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULobbyPacketPrivateMatchResponse_NoRegister()
	{
		return ULobbyPacketPrivateMatchResponse::StaticClass();
	}
	struct Z_Construct_UClass_ULobbyPacketPrivateMatchResponse_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Accept_MetaData[];
#endif
		static void NewProp_Accept_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Accept;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULobbyPacketPrivateMatchResponse_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULobbyPacketBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULobbyPacketPrivateMatchResponse_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULobbyPacketPrivateMatchResponse_GetAccept, "GetAccept" }, // 2982134524
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULobbyPacketPrivateMatchResponse_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "LobbyPacketPrivateMatchResponse.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/LobbyPacketPrivateMatchResponse.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULobbyPacketPrivateMatchResponse_Statics::NewProp_Accept_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LobbyPacketPrivateMatchResponse" },
		{ "ModuleRelativePath", "Public/LobbyPacketPrivateMatchResponse.h" },
	};
#endif
	void Z_Construct_UClass_ULobbyPacketPrivateMatchResponse_Statics::NewProp_Accept_SetBit(void* Obj)
	{
		((ULobbyPacketPrivateMatchResponse*)Obj)->Accept = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULobbyPacketPrivateMatchResponse_Statics::NewProp_Accept = { "Accept", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULobbyPacketPrivateMatchResponse), &Z_Construct_UClass_ULobbyPacketPrivateMatchResponse_Statics::NewProp_Accept_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULobbyPacketPrivateMatchResponse_Statics::NewProp_Accept_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULobbyPacketPrivateMatchResponse_Statics::NewProp_Accept_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULobbyPacketPrivateMatchResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULobbyPacketPrivateMatchResponse_Statics::NewProp_Accept,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULobbyPacketPrivateMatchResponse_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULobbyPacketPrivateMatchResponse>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULobbyPacketPrivateMatchResponse_Statics::ClassParams = {
		&ULobbyPacketPrivateMatchResponse::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULobbyPacketPrivateMatchResponse_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULobbyPacketPrivateMatchResponse_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULobbyPacketPrivateMatchResponse_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULobbyPacketPrivateMatchResponse_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULobbyPacketPrivateMatchResponse()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULobbyPacketPrivateMatchResponse_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULobbyPacketPrivateMatchResponse, 1772647262);
	template<> ABP_200508_API UClass* StaticClass<ULobbyPacketPrivateMatchResponse>()
	{
		return ULobbyPacketPrivateMatchResponse::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULobbyPacketPrivateMatchResponse(Z_Construct_UClass_ULobbyPacketPrivateMatchResponse, &ULobbyPacketPrivateMatchResponse::StaticClass, TEXT("/Script/ABP_200508"), TEXT("ULobbyPacketPrivateMatchResponse"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULobbyPacketPrivateMatchResponse);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
