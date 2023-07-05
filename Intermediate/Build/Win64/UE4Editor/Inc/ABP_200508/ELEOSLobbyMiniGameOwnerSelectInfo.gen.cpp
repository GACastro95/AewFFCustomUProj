// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELEOSLobbyMiniGameOwnerSelectInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELEOSLobbyMiniGameOwnerSelectInfo() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELEOSLobbyMiniGameOwnerSelectInfo_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELEOSLobbyMiniGameOwnerSelectInfo();
	ABP_200508_API UClass* Z_Construct_UClass_ULobbyPacketBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	DEFINE_FUNCTION(UELEOSLobbyMiniGameOwnerSelectInfo::execGetOwnerSelect)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutNextCursor);
		P_GET_UBOOL_REF(Z_Param_Out_OutDecide);
		P_GET_UBOOL_REF(Z_Param_Out_OutCancel);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetOwnerSelect(Z_Param_Out_OutNextCursor,Z_Param_Out_OutDecide,Z_Param_Out_OutCancel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSLobbyMiniGameOwnerSelectInfo::execSetOwnerSelect)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InNextCursor);
		P_GET_UBOOL(Z_Param_InDecide);
		P_GET_UBOOL(Z_Param_InCancel);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOwnerSelect(Z_Param_InNextCursor,Z_Param_InDecide,Z_Param_InCancel);
		P_NATIVE_END;
	}
	void UELEOSLobbyMiniGameOwnerSelectInfo::StaticRegisterNativesUELEOSLobbyMiniGameOwnerSelectInfo()
	{
		UClass* Class = UELEOSLobbyMiniGameOwnerSelectInfo::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetOwnerSelect", &UELEOSLobbyMiniGameOwnerSelectInfo::execGetOwnerSelect },
			{ "SetOwnerSelect", &UELEOSLobbyMiniGameOwnerSelectInfo::execSetOwnerSelect },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELEOSLobbyMiniGameOwnerSelectInfo_GetOwnerSelect_Statics
	{
		struct ELEOSLobbyMiniGameOwnerSelectInfo_eventGetOwnerSelect_Parms
		{
			int32 OutNextCursor;
			bool OutDecide;
			bool OutCancel;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OutNextCursor;
		static void NewProp_OutDecide_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_OutDecide;
		static void NewProp_OutCancel_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_OutCancel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELEOSLobbyMiniGameOwnerSelectInfo_GetOwnerSelect_Statics::NewProp_OutNextCursor = { "OutNextCursor", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSLobbyMiniGameOwnerSelectInfo_eventGetOwnerSelect_Parms, OutNextCursor), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELEOSLobbyMiniGameOwnerSelectInfo_GetOwnerSelect_Statics::NewProp_OutDecide_SetBit(void* Obj)
	{
		((ELEOSLobbyMiniGameOwnerSelectInfo_eventGetOwnerSelect_Parms*)Obj)->OutDecide = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELEOSLobbyMiniGameOwnerSelectInfo_GetOwnerSelect_Statics::NewProp_OutDecide = { "OutDecide", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEOSLobbyMiniGameOwnerSelectInfo_eventGetOwnerSelect_Parms), &Z_Construct_UFunction_UELEOSLobbyMiniGameOwnerSelectInfo_GetOwnerSelect_Statics::NewProp_OutDecide_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELEOSLobbyMiniGameOwnerSelectInfo_GetOwnerSelect_Statics::NewProp_OutCancel_SetBit(void* Obj)
	{
		((ELEOSLobbyMiniGameOwnerSelectInfo_eventGetOwnerSelect_Parms*)Obj)->OutCancel = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELEOSLobbyMiniGameOwnerSelectInfo_GetOwnerSelect_Statics::NewProp_OutCancel = { "OutCancel", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEOSLobbyMiniGameOwnerSelectInfo_eventGetOwnerSelect_Parms), &Z_Construct_UFunction_UELEOSLobbyMiniGameOwnerSelectInfo_GetOwnerSelect_Statics::NewProp_OutCancel_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSLobbyMiniGameOwnerSelectInfo_GetOwnerSelect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSLobbyMiniGameOwnerSelectInfo_GetOwnerSelect_Statics::NewProp_OutNextCursor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSLobbyMiniGameOwnerSelectInfo_GetOwnerSelect_Statics::NewProp_OutDecide,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSLobbyMiniGameOwnerSelectInfo_GetOwnerSelect_Statics::NewProp_OutCancel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSLobbyMiniGameOwnerSelectInfo_GetOwnerSelect_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSLobbyMiniGameOwnerSelectInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSLobbyMiniGameOwnerSelectInfo_GetOwnerSelect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSLobbyMiniGameOwnerSelectInfo, nullptr, "GetOwnerSelect", nullptr, nullptr, sizeof(ELEOSLobbyMiniGameOwnerSelectInfo_eventGetOwnerSelect_Parms), Z_Construct_UFunction_UELEOSLobbyMiniGameOwnerSelectInfo_GetOwnerSelect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSLobbyMiniGameOwnerSelectInfo_GetOwnerSelect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSLobbyMiniGameOwnerSelectInfo_GetOwnerSelect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSLobbyMiniGameOwnerSelectInfo_GetOwnerSelect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSLobbyMiniGameOwnerSelectInfo_GetOwnerSelect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSLobbyMiniGameOwnerSelectInfo_GetOwnerSelect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSLobbyMiniGameOwnerSelectInfo_SetOwnerSelect_Statics
	{
		struct ELEOSLobbyMiniGameOwnerSelectInfo_eventSetOwnerSelect_Parms
		{
			int32 InNextCursor;
			bool InDecide;
			bool InCancel;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InNextCursor;
		static void NewProp_InDecide_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InDecide;
		static void NewProp_InCancel_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InCancel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELEOSLobbyMiniGameOwnerSelectInfo_SetOwnerSelect_Statics::NewProp_InNextCursor = { "InNextCursor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSLobbyMiniGameOwnerSelectInfo_eventSetOwnerSelect_Parms, InNextCursor), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELEOSLobbyMiniGameOwnerSelectInfo_SetOwnerSelect_Statics::NewProp_InDecide_SetBit(void* Obj)
	{
		((ELEOSLobbyMiniGameOwnerSelectInfo_eventSetOwnerSelect_Parms*)Obj)->InDecide = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELEOSLobbyMiniGameOwnerSelectInfo_SetOwnerSelect_Statics::NewProp_InDecide = { "InDecide", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEOSLobbyMiniGameOwnerSelectInfo_eventSetOwnerSelect_Parms), &Z_Construct_UFunction_UELEOSLobbyMiniGameOwnerSelectInfo_SetOwnerSelect_Statics::NewProp_InDecide_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELEOSLobbyMiniGameOwnerSelectInfo_SetOwnerSelect_Statics::NewProp_InCancel_SetBit(void* Obj)
	{
		((ELEOSLobbyMiniGameOwnerSelectInfo_eventSetOwnerSelect_Parms*)Obj)->InCancel = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELEOSLobbyMiniGameOwnerSelectInfo_SetOwnerSelect_Statics::NewProp_InCancel = { "InCancel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEOSLobbyMiniGameOwnerSelectInfo_eventSetOwnerSelect_Parms), &Z_Construct_UFunction_UELEOSLobbyMiniGameOwnerSelectInfo_SetOwnerSelect_Statics::NewProp_InCancel_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSLobbyMiniGameOwnerSelectInfo_SetOwnerSelect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSLobbyMiniGameOwnerSelectInfo_SetOwnerSelect_Statics::NewProp_InNextCursor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSLobbyMiniGameOwnerSelectInfo_SetOwnerSelect_Statics::NewProp_InDecide,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSLobbyMiniGameOwnerSelectInfo_SetOwnerSelect_Statics::NewProp_InCancel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSLobbyMiniGameOwnerSelectInfo_SetOwnerSelect_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSLobbyMiniGameOwnerSelectInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSLobbyMiniGameOwnerSelectInfo_SetOwnerSelect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSLobbyMiniGameOwnerSelectInfo, nullptr, "SetOwnerSelect", nullptr, nullptr, sizeof(ELEOSLobbyMiniGameOwnerSelectInfo_eventSetOwnerSelect_Parms), Z_Construct_UFunction_UELEOSLobbyMiniGameOwnerSelectInfo_SetOwnerSelect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSLobbyMiniGameOwnerSelectInfo_SetOwnerSelect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSLobbyMiniGameOwnerSelectInfo_SetOwnerSelect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSLobbyMiniGameOwnerSelectInfo_SetOwnerSelect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSLobbyMiniGameOwnerSelectInfo_SetOwnerSelect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSLobbyMiniGameOwnerSelectInfo_SetOwnerSelect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELEOSLobbyMiniGameOwnerSelectInfo_NoRegister()
	{
		return UELEOSLobbyMiniGameOwnerSelectInfo::StaticClass();
	}
	struct Z_Construct_UClass_UELEOSLobbyMiniGameOwnerSelectInfo_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NextCursor_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NextCursor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Decide_MetaData[];
#endif
		static void NewProp_Decide_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Decide;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Cancel_MetaData[];
#endif
		static void NewProp_Cancel_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Cancel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELEOSLobbyMiniGameOwnerSelectInfo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULobbyPacketBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELEOSLobbyMiniGameOwnerSelectInfo_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELEOSLobbyMiniGameOwnerSelectInfo_GetOwnerSelect, "GetOwnerSelect" }, // 3098424324
		{ &Z_Construct_UFunction_UELEOSLobbyMiniGameOwnerSelectInfo_SetOwnerSelect, "SetOwnerSelect" }, // 369745510
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELEOSLobbyMiniGameOwnerSelectInfo_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELEOSLobbyMiniGameOwnerSelectInfo.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELEOSLobbyMiniGameOwnerSelectInfo.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELEOSLobbyMiniGameOwnerSelectInfo_Statics::NewProp_NextCursor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEOSLobbyMiniGameOwnerSelectInfo" },
		{ "ModuleRelativePath", "Public/ELEOSLobbyMiniGameOwnerSelectInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UELEOSLobbyMiniGameOwnerSelectInfo_Statics::NewProp_NextCursor = { "NextCursor", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELEOSLobbyMiniGameOwnerSelectInfo, NextCursor), METADATA_PARAMS(Z_Construct_UClass_UELEOSLobbyMiniGameOwnerSelectInfo_Statics::NewProp_NextCursor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELEOSLobbyMiniGameOwnerSelectInfo_Statics::NewProp_NextCursor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELEOSLobbyMiniGameOwnerSelectInfo_Statics::NewProp_Decide_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEOSLobbyMiniGameOwnerSelectInfo" },
		{ "ModuleRelativePath", "Public/ELEOSLobbyMiniGameOwnerSelectInfo.h" },
	};
#endif
	void Z_Construct_UClass_UELEOSLobbyMiniGameOwnerSelectInfo_Statics::NewProp_Decide_SetBit(void* Obj)
	{
		((UELEOSLobbyMiniGameOwnerSelectInfo*)Obj)->Decide = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELEOSLobbyMiniGameOwnerSelectInfo_Statics::NewProp_Decide = { "Decide", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELEOSLobbyMiniGameOwnerSelectInfo), &Z_Construct_UClass_UELEOSLobbyMiniGameOwnerSelectInfo_Statics::NewProp_Decide_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELEOSLobbyMiniGameOwnerSelectInfo_Statics::NewProp_Decide_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELEOSLobbyMiniGameOwnerSelectInfo_Statics::NewProp_Decide_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELEOSLobbyMiniGameOwnerSelectInfo_Statics::NewProp_Cancel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEOSLobbyMiniGameOwnerSelectInfo" },
		{ "ModuleRelativePath", "Public/ELEOSLobbyMiniGameOwnerSelectInfo.h" },
	};
#endif
	void Z_Construct_UClass_UELEOSLobbyMiniGameOwnerSelectInfo_Statics::NewProp_Cancel_SetBit(void* Obj)
	{
		((UELEOSLobbyMiniGameOwnerSelectInfo*)Obj)->Cancel = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELEOSLobbyMiniGameOwnerSelectInfo_Statics::NewProp_Cancel = { "Cancel", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELEOSLobbyMiniGameOwnerSelectInfo), &Z_Construct_UClass_UELEOSLobbyMiniGameOwnerSelectInfo_Statics::NewProp_Cancel_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELEOSLobbyMiniGameOwnerSelectInfo_Statics::NewProp_Cancel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELEOSLobbyMiniGameOwnerSelectInfo_Statics::NewProp_Cancel_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELEOSLobbyMiniGameOwnerSelectInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELEOSLobbyMiniGameOwnerSelectInfo_Statics::NewProp_NextCursor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELEOSLobbyMiniGameOwnerSelectInfo_Statics::NewProp_Decide,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELEOSLobbyMiniGameOwnerSelectInfo_Statics::NewProp_Cancel,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELEOSLobbyMiniGameOwnerSelectInfo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELEOSLobbyMiniGameOwnerSelectInfo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELEOSLobbyMiniGameOwnerSelectInfo_Statics::ClassParams = {
		&UELEOSLobbyMiniGameOwnerSelectInfo::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELEOSLobbyMiniGameOwnerSelectInfo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELEOSLobbyMiniGameOwnerSelectInfo_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELEOSLobbyMiniGameOwnerSelectInfo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELEOSLobbyMiniGameOwnerSelectInfo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELEOSLobbyMiniGameOwnerSelectInfo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELEOSLobbyMiniGameOwnerSelectInfo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELEOSLobbyMiniGameOwnerSelectInfo, 1170408201);
	template<> ABP_200508_API UClass* StaticClass<UELEOSLobbyMiniGameOwnerSelectInfo>()
	{
		return UELEOSLobbyMiniGameOwnerSelectInfo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELEOSLobbyMiniGameOwnerSelectInfo(Z_Construct_UClass_UELEOSLobbyMiniGameOwnerSelectInfo, &UELEOSLobbyMiniGameOwnerSelectInfo::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELEOSLobbyMiniGameOwnerSelectInfo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELEOSLobbyMiniGameOwnerSelectInfo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
