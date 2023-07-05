// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSessionPacketPartyData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSessionPacketPartyData() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELSessionPacketPartyData_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSessionPacketPartyData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	DEFINE_FUNCTION(UELSessionPacketPartyData::execGetPartyMemberNum)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetPartyMemberNum();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSessionPacketPartyData::execGetPartyMemberPUID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=P_THIS->GetPartyMemberPUID();
		P_NATIVE_END;
	}
	void UELSessionPacketPartyData::StaticRegisterNativesUELSessionPacketPartyData()
	{
		UClass* Class = UELSessionPacketPartyData::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetPartyMemberNum", &UELSessionPacketPartyData::execGetPartyMemberNum },
			{ "GetPartyMemberPUID", &UELSessionPacketPartyData::execGetPartyMemberPUID },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELSessionPacketPartyData_GetPartyMemberNum_Statics
	{
		struct ELSessionPacketPartyData_eventGetPartyMemberNum_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSessionPacketPartyData_GetPartyMemberNum_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSessionPacketPartyData_eventGetPartyMemberNum_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSessionPacketPartyData_GetPartyMemberNum_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSessionPacketPartyData_GetPartyMemberNum_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSessionPacketPartyData_GetPartyMemberNum_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSessionPacketPartyData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSessionPacketPartyData_GetPartyMemberNum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSessionPacketPartyData, nullptr, "GetPartyMemberNum", nullptr, nullptr, sizeof(ELSessionPacketPartyData_eventGetPartyMemberNum_Parms), Z_Construct_UFunction_UELSessionPacketPartyData_GetPartyMemberNum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSessionPacketPartyData_GetPartyMemberNum_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSessionPacketPartyData_GetPartyMemberNum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSessionPacketPartyData_GetPartyMemberNum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSessionPacketPartyData_GetPartyMemberNum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSessionPacketPartyData_GetPartyMemberNum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSessionPacketPartyData_GetPartyMemberPUID_Statics
	{
		struct ELSessionPacketPartyData_eventGetPartyMemberPUID_Parms
		{
			TArray<FString> ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELSessionPacketPartyData_GetPartyMemberPUID_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELSessionPacketPartyData_GetPartyMemberPUID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSessionPacketPartyData_eventGetPartyMemberPUID_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSessionPacketPartyData_GetPartyMemberPUID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSessionPacketPartyData_GetPartyMemberPUID_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSessionPacketPartyData_GetPartyMemberPUID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSessionPacketPartyData_GetPartyMemberPUID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSessionPacketPartyData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSessionPacketPartyData_GetPartyMemberPUID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSessionPacketPartyData, nullptr, "GetPartyMemberPUID", nullptr, nullptr, sizeof(ELSessionPacketPartyData_eventGetPartyMemberPUID_Parms), Z_Construct_UFunction_UELSessionPacketPartyData_GetPartyMemberPUID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSessionPacketPartyData_GetPartyMemberPUID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSessionPacketPartyData_GetPartyMemberPUID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSessionPacketPartyData_GetPartyMemberPUID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSessionPacketPartyData_GetPartyMemberPUID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSessionPacketPartyData_GetPartyMemberPUID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELSessionPacketPartyData_NoRegister()
	{
		return UELSessionPacketPartyData::StaticClass();
	}
	struct Z_Construct_UClass_UELSessionPacketPartyData_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JoinParty_MetaData[];
#endif
		static void NewProp_JoinParty_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_JoinParty;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PartyPlayersPUID_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PartyPlayersPUID_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PartyPlayersPUID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELSessionPacketPartyData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELSessionPacketPartyData_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELSessionPacketPartyData_GetPartyMemberNum, "GetPartyMemberNum" }, // 823895439
		{ &Z_Construct_UFunction_UELSessionPacketPartyData_GetPartyMemberPUID, "GetPartyMemberPUID" }, // 3628333650
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSessionPacketPartyData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSessionPacketPartyData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSessionPacketPartyData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSessionPacketPartyData_Statics::NewProp_JoinParty_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSessionPacketPartyData" },
		{ "ModuleRelativePath", "Public/ELSessionPacketPartyData.h" },
	};
#endif
	void Z_Construct_UClass_UELSessionPacketPartyData_Statics::NewProp_JoinParty_SetBit(void* Obj)
	{
		((UELSessionPacketPartyData*)Obj)->JoinParty = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELSessionPacketPartyData_Statics::NewProp_JoinParty = { "JoinParty", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELSessionPacketPartyData), &Z_Construct_UClass_UELSessionPacketPartyData_Statics::NewProp_JoinParty_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELSessionPacketPartyData_Statics::NewProp_JoinParty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSessionPacketPartyData_Statics::NewProp_JoinParty_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UELSessionPacketPartyData_Statics::NewProp_PartyPlayersPUID_Inner = { "PartyPlayersPUID", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSessionPacketPartyData_Statics::NewProp_PartyPlayersPUID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSessionPacketPartyData" },
		{ "ModuleRelativePath", "Public/ELSessionPacketPartyData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELSessionPacketPartyData_Statics::NewProp_PartyPlayersPUID = { "PartyPlayersPUID", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSessionPacketPartyData, PartyPlayersPUID), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELSessionPacketPartyData_Statics::NewProp_PartyPlayersPUID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSessionPacketPartyData_Statics::NewProp_PartyPlayersPUID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELSessionPacketPartyData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSessionPacketPartyData_Statics::NewProp_JoinParty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSessionPacketPartyData_Statics::NewProp_PartyPlayersPUID_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSessionPacketPartyData_Statics::NewProp_PartyPlayersPUID,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELSessionPacketPartyData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELSessionPacketPartyData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELSessionPacketPartyData_Statics::ClassParams = {
		&UELSessionPacketPartyData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELSessionPacketPartyData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELSessionPacketPartyData_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELSessionPacketPartyData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELSessionPacketPartyData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELSessionPacketPartyData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELSessionPacketPartyData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELSessionPacketPartyData, 3879567249);
	template<> ABP_200508_API UClass* StaticClass<UELSessionPacketPartyData>()
	{
		return UELSessionPacketPartyData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELSessionPacketPartyData(Z_Construct_UClass_UELSessionPacketPartyData, &UELSessionPacketPartyData::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELSessionPacketPartyData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELSessionPacketPartyData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
