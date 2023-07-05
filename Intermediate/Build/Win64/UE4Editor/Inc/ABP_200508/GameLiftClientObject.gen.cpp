// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/GameLiftClientObject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameLiftClientObject() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UGameLiftClientObject_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UGameLiftClientObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	DEFINE_FUNCTION(UGameLiftClientObject::execCreateGameLiftObject)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_AccessKey);
		P_GET_PROPERTY(FStrProperty,Z_Param_Secret);
		P_GET_PROPERTY(FStrProperty,Z_Param_Region);
		P_GET_UBOOL(Z_Param_bUsingGameLiftLocal);
		P_GET_PROPERTY(FIntProperty,Z_Param_LocalPort);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UGameLiftClientObject**)Z_Param__Result=UGameLiftClientObject::CreateGameLiftObject(Z_Param_AccessKey,Z_Param_Secret,Z_Param_Region,Z_Param_bUsingGameLiftLocal,Z_Param_LocalPort);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameLiftClientObject::execIsLocalTest)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsLocalTest();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameLiftClientObject::execSetUniquePlayerId)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_uniqId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetUniquePlayerId(Z_Param_uniqId);
		P_NATIVE_END;
	}
	void UGameLiftClientObject::StaticRegisterNativesUGameLiftClientObject()
	{
		UClass* Class = UGameLiftClientObject::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateGameLiftObject", &UGameLiftClientObject::execCreateGameLiftObject },
			{ "IsLocalTest", &UGameLiftClientObject::execIsLocalTest },
			{ "SetUniquePlayerId", &UGameLiftClientObject::execSetUniquePlayerId },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGameLiftClientObject_CreateGameLiftObject_Statics
	{
		struct GameLiftClientObject_eventCreateGameLiftObject_Parms
		{
			FString AccessKey;
			FString Secret;
			FString Region;
			bool bUsingGameLiftLocal;
			int32 LocalPort;
			UGameLiftClientObject* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AccessKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AccessKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Secret_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Secret;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Region_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Region;
		static void NewProp_bUsingGameLiftLocal_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsingGameLiftLocal;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LocalPort;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameLiftClientObject_CreateGameLiftObject_Statics::NewProp_AccessKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameLiftClientObject_CreateGameLiftObject_Statics::NewProp_AccessKey = { "AccessKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameLiftClientObject_eventCreateGameLiftObject_Parms, AccessKey), METADATA_PARAMS(Z_Construct_UFunction_UGameLiftClientObject_CreateGameLiftObject_Statics::NewProp_AccessKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameLiftClientObject_CreateGameLiftObject_Statics::NewProp_AccessKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameLiftClientObject_CreateGameLiftObject_Statics::NewProp_Secret_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameLiftClientObject_CreateGameLiftObject_Statics::NewProp_Secret = { "Secret", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameLiftClientObject_eventCreateGameLiftObject_Parms, Secret), METADATA_PARAMS(Z_Construct_UFunction_UGameLiftClientObject_CreateGameLiftObject_Statics::NewProp_Secret_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameLiftClientObject_CreateGameLiftObject_Statics::NewProp_Secret_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameLiftClientObject_CreateGameLiftObject_Statics::NewProp_Region_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameLiftClientObject_CreateGameLiftObject_Statics::NewProp_Region = { "Region", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameLiftClientObject_eventCreateGameLiftObject_Parms, Region), METADATA_PARAMS(Z_Construct_UFunction_UGameLiftClientObject_CreateGameLiftObject_Statics::NewProp_Region_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameLiftClientObject_CreateGameLiftObject_Statics::NewProp_Region_MetaData)) };
	void Z_Construct_UFunction_UGameLiftClientObject_CreateGameLiftObject_Statics::NewProp_bUsingGameLiftLocal_SetBit(void* Obj)
	{
		((GameLiftClientObject_eventCreateGameLiftObject_Parms*)Obj)->bUsingGameLiftLocal = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameLiftClientObject_CreateGameLiftObject_Statics::NewProp_bUsingGameLiftLocal = { "bUsingGameLiftLocal", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameLiftClientObject_eventCreateGameLiftObject_Parms), &Z_Construct_UFunction_UGameLiftClientObject_CreateGameLiftObject_Statics::NewProp_bUsingGameLiftLocal_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGameLiftClientObject_CreateGameLiftObject_Statics::NewProp_LocalPort = { "LocalPort", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameLiftClientObject_eventCreateGameLiftObject_Parms, LocalPort), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameLiftClientObject_CreateGameLiftObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameLiftClientObject_eventCreateGameLiftObject_Parms, ReturnValue), Z_Construct_UClass_UGameLiftClientObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameLiftClientObject_CreateGameLiftObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameLiftClientObject_CreateGameLiftObject_Statics::NewProp_AccessKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameLiftClientObject_CreateGameLiftObject_Statics::NewProp_Secret,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameLiftClientObject_CreateGameLiftObject_Statics::NewProp_Region,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameLiftClientObject_CreateGameLiftObject_Statics::NewProp_bUsingGameLiftLocal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameLiftClientObject_CreateGameLiftObject_Statics::NewProp_LocalPort,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameLiftClientObject_CreateGameLiftObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameLiftClientObject_CreateGameLiftObject_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameLiftClientObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameLiftClientObject_CreateGameLiftObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameLiftClientObject, nullptr, "CreateGameLiftObject", nullptr, nullptr, sizeof(GameLiftClientObject_eventCreateGameLiftObject_Parms), Z_Construct_UFunction_UGameLiftClientObject_CreateGameLiftObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameLiftClientObject_CreateGameLiftObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameLiftClientObject_CreateGameLiftObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameLiftClientObject_CreateGameLiftObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameLiftClientObject_CreateGameLiftObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameLiftClientObject_CreateGameLiftObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameLiftClientObject_IsLocalTest_Statics
	{
		struct GameLiftClientObject_eventIsLocalTest_Parms
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
	void Z_Construct_UFunction_UGameLiftClientObject_IsLocalTest_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameLiftClientObject_eventIsLocalTest_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameLiftClientObject_IsLocalTest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameLiftClientObject_eventIsLocalTest_Parms), &Z_Construct_UFunction_UGameLiftClientObject_IsLocalTest_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameLiftClientObject_IsLocalTest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameLiftClientObject_IsLocalTest_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameLiftClientObject_IsLocalTest_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameLiftClientObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameLiftClientObject_IsLocalTest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameLiftClientObject, nullptr, "IsLocalTest", nullptr, nullptr, sizeof(GameLiftClientObject_eventIsLocalTest_Parms), Z_Construct_UFunction_UGameLiftClientObject_IsLocalTest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameLiftClientObject_IsLocalTest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameLiftClientObject_IsLocalTest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameLiftClientObject_IsLocalTest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameLiftClientObject_IsLocalTest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameLiftClientObject_IsLocalTest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameLiftClientObject_SetUniquePlayerId_Statics
	{
		struct GameLiftClientObject_eventSetUniquePlayerId_Parms
		{
			FString uniqId;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_uniqId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_uniqId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameLiftClientObject_SetUniquePlayerId_Statics::NewProp_uniqId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameLiftClientObject_SetUniquePlayerId_Statics::NewProp_uniqId = { "uniqId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameLiftClientObject_eventSetUniquePlayerId_Parms, uniqId), METADATA_PARAMS(Z_Construct_UFunction_UGameLiftClientObject_SetUniquePlayerId_Statics::NewProp_uniqId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameLiftClientObject_SetUniquePlayerId_Statics::NewProp_uniqId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameLiftClientObject_SetUniquePlayerId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameLiftClientObject_SetUniquePlayerId_Statics::NewProp_uniqId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameLiftClientObject_SetUniquePlayerId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameLiftClientObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameLiftClientObject_SetUniquePlayerId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameLiftClientObject, nullptr, "SetUniquePlayerId", nullptr, nullptr, sizeof(GameLiftClientObject_eventSetUniquePlayerId_Parms), Z_Construct_UFunction_UGameLiftClientObject_SetUniquePlayerId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameLiftClientObject_SetUniquePlayerId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameLiftClientObject_SetUniquePlayerId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameLiftClientObject_SetUniquePlayerId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameLiftClientObject_SetUniquePlayerId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameLiftClientObject_SetUniquePlayerId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGameLiftClientObject_NoRegister()
	{
		return UGameLiftClientObject::StaticClass();
	}
	struct Z_Construct_UClass_UGameLiftClientObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameLiftClientObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGameLiftClientObject_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameLiftClientObject_CreateGameLiftObject, "CreateGameLiftObject" }, // 3622261135
		{ &Z_Construct_UFunction_UGameLiftClientObject_IsLocalTest, "IsLocalTest" }, // 3034831536
		{ &Z_Construct_UFunction_UGameLiftClientObject_SetUniquePlayerId, "SetUniquePlayerId" }, // 4130618527
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameLiftClientObject_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "GameLiftClientObject.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GameLiftClientObject.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameLiftClientObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameLiftClientObject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGameLiftClientObject_Statics::ClassParams = {
		&UGameLiftClientObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGameLiftClientObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameLiftClientObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameLiftClientObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGameLiftClientObject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGameLiftClientObject, 1338088920);
	template<> ABP_200508_API UClass* StaticClass<UGameLiftClientObject>()
	{
		return UGameLiftClientObject::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGameLiftClientObject(Z_Construct_UClass_UGameLiftClientObject, &UGameLiftClientObject::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UGameLiftClientObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameLiftClientObject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
