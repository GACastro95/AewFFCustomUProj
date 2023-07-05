// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/LobbyPacketMenuInput.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLobbyPacketMenuInput() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_ULobbyPacketMenuInput_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_ULobbyPacketMenuInput();
	ABP_200508_API UClass* Z_Construct_UClass_ULobbyPacketBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ELobbyPacketMenuInputType();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ELobbyPacketMenuInputSendType();
// End Cross Module References
	DEFINE_FUNCTION(ULobbyPacketMenuInput::execGetInputValue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ELobbyPacketMenuInputType*)Z_Param__Result=P_THIS->GetInputValue();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULobbyPacketMenuInput::execGetPlayerIndex)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetPlayerIndex();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULobbyPacketMenuInput::execGetSendType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ELobbyPacketMenuInputSendType*)Z_Param__Result=P_THIS->GetSendType();
		P_NATIVE_END;
	}
	void ULobbyPacketMenuInput::StaticRegisterNativesULobbyPacketMenuInput()
	{
		UClass* Class = ULobbyPacketMenuInput::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetInputValue", &ULobbyPacketMenuInput::execGetInputValue },
			{ "GetPlayerIndex", &ULobbyPacketMenuInput::execGetPlayerIndex },
			{ "GetSendType", &ULobbyPacketMenuInput::execGetSendType },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULobbyPacketMenuInput_GetInputValue_Statics
	{
		struct LobbyPacketMenuInput_eventGetInputValue_Parms
		{
			ELobbyPacketMenuInputType ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULobbyPacketMenuInput_GetInputValue_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULobbyPacketMenuInput_GetInputValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LobbyPacketMenuInput_eventGetInputValue_Parms, ReturnValue), Z_Construct_UEnum_ABP_200508_ELobbyPacketMenuInputType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULobbyPacketMenuInput_GetInputValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULobbyPacketMenuInput_GetInputValue_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULobbyPacketMenuInput_GetInputValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULobbyPacketMenuInput_GetInputValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LobbyPacketMenuInput.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULobbyPacketMenuInput_GetInputValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULobbyPacketMenuInput, nullptr, "GetInputValue", nullptr, nullptr, sizeof(LobbyPacketMenuInput_eventGetInputValue_Parms), Z_Construct_UFunction_ULobbyPacketMenuInput_GetInputValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULobbyPacketMenuInput_GetInputValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULobbyPacketMenuInput_GetInputValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULobbyPacketMenuInput_GetInputValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULobbyPacketMenuInput_GetInputValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULobbyPacketMenuInput_GetInputValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULobbyPacketMenuInput_GetPlayerIndex_Statics
	{
		struct LobbyPacketMenuInput_eventGetPlayerIndex_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULobbyPacketMenuInput_GetPlayerIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LobbyPacketMenuInput_eventGetPlayerIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULobbyPacketMenuInput_GetPlayerIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULobbyPacketMenuInput_GetPlayerIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULobbyPacketMenuInput_GetPlayerIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LobbyPacketMenuInput.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULobbyPacketMenuInput_GetPlayerIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULobbyPacketMenuInput, nullptr, "GetPlayerIndex", nullptr, nullptr, sizeof(LobbyPacketMenuInput_eventGetPlayerIndex_Parms), Z_Construct_UFunction_ULobbyPacketMenuInput_GetPlayerIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULobbyPacketMenuInput_GetPlayerIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULobbyPacketMenuInput_GetPlayerIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULobbyPacketMenuInput_GetPlayerIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULobbyPacketMenuInput_GetPlayerIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULobbyPacketMenuInput_GetPlayerIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULobbyPacketMenuInput_GetSendType_Statics
	{
		struct LobbyPacketMenuInput_eventGetSendType_Parms
		{
			ELobbyPacketMenuInputSendType ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULobbyPacketMenuInput_GetSendType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULobbyPacketMenuInput_GetSendType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LobbyPacketMenuInput_eventGetSendType_Parms, ReturnValue), Z_Construct_UEnum_ABP_200508_ELobbyPacketMenuInputSendType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULobbyPacketMenuInput_GetSendType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULobbyPacketMenuInput_GetSendType_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULobbyPacketMenuInput_GetSendType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULobbyPacketMenuInput_GetSendType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LobbyPacketMenuInput.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULobbyPacketMenuInput_GetSendType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULobbyPacketMenuInput, nullptr, "GetSendType", nullptr, nullptr, sizeof(LobbyPacketMenuInput_eventGetSendType_Parms), Z_Construct_UFunction_ULobbyPacketMenuInput_GetSendType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULobbyPacketMenuInput_GetSendType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULobbyPacketMenuInput_GetSendType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULobbyPacketMenuInput_GetSendType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULobbyPacketMenuInput_GetSendType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULobbyPacketMenuInput_GetSendType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULobbyPacketMenuInput_NoRegister()
	{
		return ULobbyPacketMenuInput::StaticClass();
	}
	struct Z_Construct_UClass_ULobbyPacketMenuInput_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InputValue_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InputValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SendType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SendType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SendType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULobbyPacketMenuInput_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULobbyPacketBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULobbyPacketMenuInput_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULobbyPacketMenuInput_GetInputValue, "GetInputValue" }, // 3087578056
		{ &Z_Construct_UFunction_ULobbyPacketMenuInput_GetPlayerIndex, "GetPlayerIndex" }, // 4114700119
		{ &Z_Construct_UFunction_ULobbyPacketMenuInput_GetSendType, "GetSendType" }, // 2623710394
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULobbyPacketMenuInput_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "LobbyPacketMenuInput.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/LobbyPacketMenuInput.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULobbyPacketMenuInput_Statics::NewProp_PlayerIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LobbyPacketMenuInput" },
		{ "ModuleRelativePath", "Public/LobbyPacketMenuInput.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULobbyPacketMenuInput_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULobbyPacketMenuInput, PlayerIndex), METADATA_PARAMS(Z_Construct_UClass_ULobbyPacketMenuInput_Statics::NewProp_PlayerIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULobbyPacketMenuInput_Statics::NewProp_PlayerIndex_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULobbyPacketMenuInput_Statics::NewProp_InputValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULobbyPacketMenuInput_Statics::NewProp_InputValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LobbyPacketMenuInput" },
		{ "ModuleRelativePath", "Public/LobbyPacketMenuInput.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULobbyPacketMenuInput_Statics::NewProp_InputValue = { "InputValue", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULobbyPacketMenuInput, InputValue), Z_Construct_UEnum_ABP_200508_ELobbyPacketMenuInputType, METADATA_PARAMS(Z_Construct_UClass_ULobbyPacketMenuInput_Statics::NewProp_InputValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULobbyPacketMenuInput_Statics::NewProp_InputValue_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULobbyPacketMenuInput_Statics::NewProp_SendType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULobbyPacketMenuInput_Statics::NewProp_SendType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LobbyPacketMenuInput" },
		{ "ModuleRelativePath", "Public/LobbyPacketMenuInput.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULobbyPacketMenuInput_Statics::NewProp_SendType = { "SendType", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULobbyPacketMenuInput, SendType), Z_Construct_UEnum_ABP_200508_ELobbyPacketMenuInputSendType, METADATA_PARAMS(Z_Construct_UClass_ULobbyPacketMenuInput_Statics::NewProp_SendType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULobbyPacketMenuInput_Statics::NewProp_SendType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULobbyPacketMenuInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULobbyPacketMenuInput_Statics::NewProp_PlayerIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULobbyPacketMenuInput_Statics::NewProp_InputValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULobbyPacketMenuInput_Statics::NewProp_InputValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULobbyPacketMenuInput_Statics::NewProp_SendType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULobbyPacketMenuInput_Statics::NewProp_SendType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULobbyPacketMenuInput_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULobbyPacketMenuInput>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULobbyPacketMenuInput_Statics::ClassParams = {
		&ULobbyPacketMenuInput::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULobbyPacketMenuInput_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULobbyPacketMenuInput_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULobbyPacketMenuInput_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULobbyPacketMenuInput_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULobbyPacketMenuInput()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULobbyPacketMenuInput_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULobbyPacketMenuInput, 3047954510);
	template<> ABP_200508_API UClass* StaticClass<ULobbyPacketMenuInput>()
	{
		return ULobbyPacketMenuInput::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULobbyPacketMenuInput(Z_Construct_UClass_ULobbyPacketMenuInput, &ULobbyPacketMenuInput::StaticClass, TEXT("/Script/ABP_200508"), TEXT("ULobbyPacketMenuInput"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULobbyPacketMenuInput);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
