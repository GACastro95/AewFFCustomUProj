// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE/Public/ELSaveDataAccessObject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSaveDataAccessObject() {}
// Cross Module References
	ELITE_API UClass* Z_Construct_UClass_UELSaveDataAccessObject_NoRegister();
	ELITE_API UClass* Z_Construct_UClass_UELSaveDataAccessObject();
	ELITE_API UClass* Z_Construct_UClass_UELSaveDataAccessObjectBase();
	UPackage* Z_Construct_UPackage__Script_ELITE();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_ESaveDataType();
// End Cross Module References
	DEFINE_FUNCTION(UELSaveDataAccessObject::execOnInitFileList)
	{
		P_GET_ENUM(ESaveDataType,Z_Param_SaveDataType);
		P_GET_TARRAY_REF(FString,Z_Param_Out_Out);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnInitFileList_Implementation(ESaveDataType(Z_Param_SaveDataType),Z_Param_Out_Out);
		P_NATIVE_END;
	}
	static FName NAME_UELSaveDataAccessObject_OnInitFileList = FName(TEXT("OnInitFileList"));
	void UELSaveDataAccessObject::OnInitFileList(const ESaveDataType SaveDataType, TArray<FString>& Out)
	{
		ELSaveDataAccessObject_eventOnInitFileList_Parms Parms;
		Parms.SaveDataType=SaveDataType;
		Parms.Out=Out;
		ProcessEvent(FindFunctionChecked(NAME_UELSaveDataAccessObject_OnInitFileList),&Parms);
		Out=Parms.Out;
	}
	void UELSaveDataAccessObject::StaticRegisterNativesUELSaveDataAccessObject()
	{
		UClass* Class = UELSaveDataAccessObject::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnInitFileList", &UELSaveDataAccessObject::execOnInitFileList },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELSaveDataAccessObject_OnInitFileList_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SaveDataType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SaveDataType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SaveDataType;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Out_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Out;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSaveDataAccessObject_OnInitFileList_Statics::NewProp_SaveDataType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSaveDataAccessObject_OnInitFileList_Statics::NewProp_SaveDataType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSaveDataAccessObject_OnInitFileList_Statics::NewProp_SaveDataType = { "SaveDataType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSaveDataAccessObject_eventOnInitFileList_Parms, SaveDataType), Z_Construct_UEnum_ELITE_Game_ESaveDataType, METADATA_PARAMS(Z_Construct_UFunction_UELSaveDataAccessObject_OnInitFileList_Statics::NewProp_SaveDataType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSaveDataAccessObject_OnInitFileList_Statics::NewProp_SaveDataType_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELSaveDataAccessObject_OnInitFileList_Statics::NewProp_Out_Inner = { "Out", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELSaveDataAccessObject_OnInitFileList_Statics::NewProp_Out = { "Out", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSaveDataAccessObject_eventOnInitFileList_Parms, Out), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSaveDataAccessObject_OnInitFileList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSaveDataAccessObject_OnInitFileList_Statics::NewProp_SaveDataType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSaveDataAccessObject_OnInitFileList_Statics::NewProp_SaveDataType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSaveDataAccessObject_OnInitFileList_Statics::NewProp_Out_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSaveDataAccessObject_OnInitFileList_Statics::NewProp_Out,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSaveDataAccessObject_OnInitFileList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSaveDataAccessObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSaveDataAccessObject_OnInitFileList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSaveDataAccessObject, nullptr, "OnInitFileList", nullptr, nullptr, sizeof(ELSaveDataAccessObject_eventOnInitFileList_Parms), Z_Construct_UFunction_UELSaveDataAccessObject_OnInitFileList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSaveDataAccessObject_OnInitFileList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C480C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSaveDataAccessObject_OnInitFileList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSaveDataAccessObject_OnInitFileList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSaveDataAccessObject_OnInitFileList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSaveDataAccessObject_OnInitFileList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELSaveDataAccessObject_NoRegister()
	{
		return UELSaveDataAccessObject::StaticClass();
	}
	struct Z_Construct_UClass_UELSaveDataAccessObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RequestFileNames_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RequestFileNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RequestFileNames;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELSaveDataAccessObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELSaveDataAccessObjectBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELSaveDataAccessObject_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELSaveDataAccessObject_OnInitFileList, "OnInitFileList" }, // 267966364
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSaveDataAccessObject_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSaveDataAccessObject.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSaveDataAccessObject.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UELSaveDataAccessObject_Statics::NewProp_RequestFileNames_Inner = { "RequestFileNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSaveDataAccessObject_Statics::NewProp_RequestFileNames_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSaveDataAccessObject" },
		{ "ModuleRelativePath", "Public/ELSaveDataAccessObject.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELSaveDataAccessObject_Statics::NewProp_RequestFileNames = { "RequestFileNames", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSaveDataAccessObject, RequestFileNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELSaveDataAccessObject_Statics::NewProp_RequestFileNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSaveDataAccessObject_Statics::NewProp_RequestFileNames_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELSaveDataAccessObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSaveDataAccessObject_Statics::NewProp_RequestFileNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSaveDataAccessObject_Statics::NewProp_RequestFileNames,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELSaveDataAccessObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELSaveDataAccessObject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELSaveDataAccessObject_Statics::ClassParams = {
		&UELSaveDataAccessObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELSaveDataAccessObject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELSaveDataAccessObject_Statics::PropPointers),
		0,
		0x009000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UELSaveDataAccessObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELSaveDataAccessObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELSaveDataAccessObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELSaveDataAccessObject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELSaveDataAccessObject, 2103887704);
	template<> ELITE_API UClass* StaticClass<UELSaveDataAccessObject>()
	{
		return UELSaveDataAccessObject::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELSaveDataAccessObject(Z_Construct_UClass_UELSaveDataAccessObject, &UELSaveDataAccessObject::StaticClass, TEXT("/Script/ELITE"), TEXT("UELSaveDataAccessObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELSaveDataAccessObject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
