// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/LobbyPacketPrivateMatchNotify.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLobbyPacketPrivateMatchNotify() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_ULobbyPacketPrivateMatchNotify_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_ULobbyPacketPrivateMatchNotify();
	ABP_200508_API UClass* Z_Construct_UClass_ULobbyPacketBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ELobbyPacketPrivateMatchNotify();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ELobbyPacketNotifyType();
// End Cross Module References
	DEFINE_FUNCTION(ULobbyPacketPrivateMatchNotify::execGetNotify)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ELobbyPacketPrivateMatchNotify*)Z_Param__Result=P_THIS->GetNotify();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULobbyPacketPrivateMatchNotify::execGetNotifyType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ELobbyPacketNotifyType*)Z_Param__Result=P_THIS->GetNotifyType();
		P_NATIVE_END;
	}
	void ULobbyPacketPrivateMatchNotify::StaticRegisterNativesULobbyPacketPrivateMatchNotify()
	{
		UClass* Class = ULobbyPacketPrivateMatchNotify::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetNotify", &ULobbyPacketPrivateMatchNotify::execGetNotify },
			{ "GetNotifyType", &ULobbyPacketPrivateMatchNotify::execGetNotifyType },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULobbyPacketPrivateMatchNotify_GetNotify_Statics
	{
		struct LobbyPacketPrivateMatchNotify_eventGetNotify_Parms
		{
			ELobbyPacketPrivateMatchNotify ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULobbyPacketPrivateMatchNotify_GetNotify_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULobbyPacketPrivateMatchNotify_GetNotify_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LobbyPacketPrivateMatchNotify_eventGetNotify_Parms, ReturnValue), Z_Construct_UEnum_ABP_200508_ELobbyPacketPrivateMatchNotify, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULobbyPacketPrivateMatchNotify_GetNotify_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULobbyPacketPrivateMatchNotify_GetNotify_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULobbyPacketPrivateMatchNotify_GetNotify_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULobbyPacketPrivateMatchNotify_GetNotify_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LobbyPacketPrivateMatchNotify.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULobbyPacketPrivateMatchNotify_GetNotify_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULobbyPacketPrivateMatchNotify, nullptr, "GetNotify", nullptr, nullptr, sizeof(LobbyPacketPrivateMatchNotify_eventGetNotify_Parms), Z_Construct_UFunction_ULobbyPacketPrivateMatchNotify_GetNotify_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULobbyPacketPrivateMatchNotify_GetNotify_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULobbyPacketPrivateMatchNotify_GetNotify_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULobbyPacketPrivateMatchNotify_GetNotify_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULobbyPacketPrivateMatchNotify_GetNotify()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULobbyPacketPrivateMatchNotify_GetNotify_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULobbyPacketPrivateMatchNotify_GetNotifyType_Statics
	{
		struct LobbyPacketPrivateMatchNotify_eventGetNotifyType_Parms
		{
			ELobbyPacketNotifyType ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULobbyPacketPrivateMatchNotify_GetNotifyType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULobbyPacketPrivateMatchNotify_GetNotifyType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LobbyPacketPrivateMatchNotify_eventGetNotifyType_Parms, ReturnValue), Z_Construct_UEnum_ABP_200508_ELobbyPacketNotifyType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULobbyPacketPrivateMatchNotify_GetNotifyType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULobbyPacketPrivateMatchNotify_GetNotifyType_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULobbyPacketPrivateMatchNotify_GetNotifyType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULobbyPacketPrivateMatchNotify_GetNotifyType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LobbyPacketPrivateMatchNotify.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULobbyPacketPrivateMatchNotify_GetNotifyType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULobbyPacketPrivateMatchNotify, nullptr, "GetNotifyType", nullptr, nullptr, sizeof(LobbyPacketPrivateMatchNotify_eventGetNotifyType_Parms), Z_Construct_UFunction_ULobbyPacketPrivateMatchNotify_GetNotifyType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULobbyPacketPrivateMatchNotify_GetNotifyType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULobbyPacketPrivateMatchNotify_GetNotifyType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULobbyPacketPrivateMatchNotify_GetNotifyType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULobbyPacketPrivateMatchNotify_GetNotifyType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULobbyPacketPrivateMatchNotify_GetNotifyType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULobbyPacketPrivateMatchNotify_NoRegister()
	{
		return ULobbyPacketPrivateMatchNotify::StaticClass();
	}
	struct Z_Construct_UClass_ULobbyPacketPrivateMatchNotify_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Notify_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Notify;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULobbyPacketPrivateMatchNotify_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULobbyPacketBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULobbyPacketPrivateMatchNotify_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULobbyPacketPrivateMatchNotify_GetNotify, "GetNotify" }, // 4043033131
		{ &Z_Construct_UFunction_ULobbyPacketPrivateMatchNotify_GetNotifyType, "GetNotifyType" }, // 1632347195
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULobbyPacketPrivateMatchNotify_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "LobbyPacketPrivateMatchNotify.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/LobbyPacketPrivateMatchNotify.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULobbyPacketPrivateMatchNotify_Statics::NewProp_Notify_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LobbyPacketPrivateMatchNotify" },
		{ "ModuleRelativePath", "Public/LobbyPacketPrivateMatchNotify.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULobbyPacketPrivateMatchNotify_Statics::NewProp_Notify = { "Notify", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULobbyPacketPrivateMatchNotify, Notify), METADATA_PARAMS(Z_Construct_UClass_ULobbyPacketPrivateMatchNotify_Statics::NewProp_Notify_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULobbyPacketPrivateMatchNotify_Statics::NewProp_Notify_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULobbyPacketPrivateMatchNotify_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULobbyPacketPrivateMatchNotify_Statics::NewProp_Notify,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULobbyPacketPrivateMatchNotify_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULobbyPacketPrivateMatchNotify>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULobbyPacketPrivateMatchNotify_Statics::ClassParams = {
		&ULobbyPacketPrivateMatchNotify::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULobbyPacketPrivateMatchNotify_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULobbyPacketPrivateMatchNotify_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULobbyPacketPrivateMatchNotify_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULobbyPacketPrivateMatchNotify_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULobbyPacketPrivateMatchNotify()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULobbyPacketPrivateMatchNotify_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULobbyPacketPrivateMatchNotify, 2670443650);
	template<> ABP_200508_API UClass* StaticClass<ULobbyPacketPrivateMatchNotify>()
	{
		return ULobbyPacketPrivateMatchNotify::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULobbyPacketPrivateMatchNotify(Z_Construct_UClass_ULobbyPacketPrivateMatchNotify, &ULobbyPacketPrivateMatchNotify::StaticClass, TEXT("/Script/ABP_200508"), TEXT("ULobbyPacketPrivateMatchNotify"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULobbyPacketPrivateMatchNotify);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
