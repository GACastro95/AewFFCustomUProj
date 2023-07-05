// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/LobbyPacketObject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLobbyPacketObject() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_ULobbyPacketObject_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_ULobbyPacketObject();
	ABP_200508_API UClass* Z_Construct_UClass_ULobbyPacketBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ULobbyPacketObject::execGetData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UObject**)Z_Param__Result=P_THIS->GetData();
		P_NATIVE_END;
	}
	void ULobbyPacketObject::StaticRegisterNativesULobbyPacketObject()
	{
		UClass* Class = ULobbyPacketObject::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetData", &ULobbyPacketObject::execGetData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULobbyPacketObject_GetData_Statics
	{
		struct LobbyPacketObject_eventGetData_Parms
		{
			UObject* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULobbyPacketObject_GetData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LobbyPacketObject_eventGetData_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULobbyPacketObject_GetData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULobbyPacketObject_GetData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULobbyPacketObject_GetData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LobbyPacketObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULobbyPacketObject_GetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULobbyPacketObject, nullptr, "GetData", nullptr, nullptr, sizeof(LobbyPacketObject_eventGetData_Parms), Z_Construct_UFunction_ULobbyPacketObject_GetData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULobbyPacketObject_GetData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULobbyPacketObject_GetData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULobbyPacketObject_GetData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULobbyPacketObject_GetData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULobbyPacketObject_GetData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULobbyPacketObject_NoRegister()
	{
		return ULobbyPacketObject::StaticClass();
	}
	struct Z_Construct_UClass_ULobbyPacketObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULobbyPacketObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULobbyPacketBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULobbyPacketObject_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULobbyPacketObject_GetData, "GetData" }, // 2760827132
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULobbyPacketObject_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "LobbyPacketObject.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/LobbyPacketObject.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULobbyPacketObject_Statics::NewProp_Data_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LobbyPacketObject" },
		{ "ModuleRelativePath", "Public/LobbyPacketObject.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULobbyPacketObject_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULobbyPacketObject, Data), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULobbyPacketObject_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULobbyPacketObject_Statics::NewProp_Data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULobbyPacketObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULobbyPacketObject_Statics::NewProp_Data,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULobbyPacketObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULobbyPacketObject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULobbyPacketObject_Statics::ClassParams = {
		&ULobbyPacketObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULobbyPacketObject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULobbyPacketObject_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULobbyPacketObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULobbyPacketObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULobbyPacketObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULobbyPacketObject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULobbyPacketObject, 2664145858);
	template<> ABP_200508_API UClass* StaticClass<ULobbyPacketObject>()
	{
		return ULobbyPacketObject::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULobbyPacketObject(Z_Construct_UClass_ULobbyPacketObject, &ULobbyPacketObject::StaticClass, TEXT("/Script/ABP_200508"), TEXT("ULobbyPacketObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULobbyPacketObject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
