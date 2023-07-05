// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/YCAA_DebugMenu.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeYCAA_DebugMenu() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UYCAA_DebugMenu_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UYCAA_DebugMenu();
	ABP_200508_API UClass* Z_Construct_UClass_UYCreate_DebugMenuBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_CAA_DebugDelegate__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UYCAA_DebugMenu::execConvertTexture2DToBuffer)
	{
		P_GET_SOFTOBJECT_REF(TSoftObjectPtr<UTexture2D>,Z_Param_Out_Texture);
		P_GET_TARRAY_REF(uint8,Z_Param_Out_OutBuffer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ConvertTexture2DToBuffer(Z_Param_Out_Texture,Z_Param_Out_OutBuffer);
		P_NATIVE_END;
	}
	static FName NAME_UYCAA_DebugMenu_EnableHeavyArena = FName(TEXT("EnableHeavyArena"));
	bool UYCAA_DebugMenu::EnableHeavyArena()
	{
		YCAA_DebugMenu_eventEnableHeavyArena_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UYCAA_DebugMenu_EnableHeavyArena),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UYCAA_DebugMenu_EnableMaxCAA = FName(TEXT("EnableMaxCAA"));
	bool UYCAA_DebugMenu::EnableMaxCAA()
	{
		YCAA_DebugMenu_eventEnableMaxCAA_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UYCAA_DebugMenu_EnableMaxCAA),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UYCAA_DebugMenu_Initialize = FName(TEXT("Initialize"));
	void UYCAA_DebugMenu::Initialize()
	{
		ProcessEvent(FindFunctionChecked(NAME_UYCAA_DebugMenu_Initialize),NULL);
	}
	void UYCAA_DebugMenu::StaticRegisterNativesUYCAA_DebugMenu()
	{
		UClass* Class = UYCAA_DebugMenu::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConvertTexture2DToBuffer", &UYCAA_DebugMenu::execConvertTexture2DToBuffer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UYCAA_DebugMenu_ConvertTexture2DToBuffer_Statics
	{
		struct YCAA_DebugMenu_eventConvertTexture2DToBuffer_Parms
		{
			TSoftObjectPtr<UTexture2D> Texture;
			TArray<uint8> OutBuffer;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Texture_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_Texture;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OutBuffer_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutBuffer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYCAA_DebugMenu_ConvertTexture2DToBuffer_Statics::NewProp_Texture_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UYCAA_DebugMenu_ConvertTexture2DToBuffer_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0014000008000182, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YCAA_DebugMenu_eventConvertTexture2DToBuffer_Parms, Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UYCAA_DebugMenu_ConvertTexture2DToBuffer_Statics::NewProp_Texture_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYCAA_DebugMenu_ConvertTexture2DToBuffer_Statics::NewProp_Texture_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UYCAA_DebugMenu_ConvertTexture2DToBuffer_Statics::NewProp_OutBuffer_Inner = { "OutBuffer", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UYCAA_DebugMenu_ConvertTexture2DToBuffer_Statics::NewProp_OutBuffer = { "OutBuffer", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YCAA_DebugMenu_eventConvertTexture2DToBuffer_Parms, OutBuffer), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYCAA_DebugMenu_ConvertTexture2DToBuffer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYCAA_DebugMenu_ConvertTexture2DToBuffer_Statics::NewProp_Texture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYCAA_DebugMenu_ConvertTexture2DToBuffer_Statics::NewProp_OutBuffer_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYCAA_DebugMenu_ConvertTexture2DToBuffer_Statics::NewProp_OutBuffer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYCAA_DebugMenu_ConvertTexture2DToBuffer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YCAA_DebugMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYCAA_DebugMenu_ConvertTexture2DToBuffer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYCAA_DebugMenu, nullptr, "ConvertTexture2DToBuffer", nullptr, nullptr, sizeof(YCAA_DebugMenu_eventConvertTexture2DToBuffer_Parms), Z_Construct_UFunction_UYCAA_DebugMenu_ConvertTexture2DToBuffer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYCAA_DebugMenu_ConvertTexture2DToBuffer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYCAA_DebugMenu_ConvertTexture2DToBuffer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYCAA_DebugMenu_ConvertTexture2DToBuffer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYCAA_DebugMenu_ConvertTexture2DToBuffer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYCAA_DebugMenu_ConvertTexture2DToBuffer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYCAA_DebugMenu_EnableHeavyArena_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UYCAA_DebugMenu_EnableHeavyArena_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((YCAA_DebugMenu_eventEnableHeavyArena_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYCAA_DebugMenu_EnableHeavyArena_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YCAA_DebugMenu_eventEnableHeavyArena_Parms), &Z_Construct_UFunction_UYCAA_DebugMenu_EnableHeavyArena_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYCAA_DebugMenu_EnableHeavyArena_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYCAA_DebugMenu_EnableHeavyArena_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYCAA_DebugMenu_EnableHeavyArena_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YCAA_DebugMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYCAA_DebugMenu_EnableHeavyArena_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYCAA_DebugMenu, nullptr, "EnableHeavyArena", nullptr, nullptr, sizeof(YCAA_DebugMenu_eventEnableHeavyArena_Parms), Z_Construct_UFunction_UYCAA_DebugMenu_EnableHeavyArena_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYCAA_DebugMenu_EnableHeavyArena_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYCAA_DebugMenu_EnableHeavyArena_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYCAA_DebugMenu_EnableHeavyArena_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYCAA_DebugMenu_EnableHeavyArena()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYCAA_DebugMenu_EnableHeavyArena_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYCAA_DebugMenu_EnableMaxCAA_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UYCAA_DebugMenu_EnableMaxCAA_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((YCAA_DebugMenu_eventEnableMaxCAA_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYCAA_DebugMenu_EnableMaxCAA_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YCAA_DebugMenu_eventEnableMaxCAA_Parms), &Z_Construct_UFunction_UYCAA_DebugMenu_EnableMaxCAA_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYCAA_DebugMenu_EnableMaxCAA_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYCAA_DebugMenu_EnableMaxCAA_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYCAA_DebugMenu_EnableMaxCAA_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YCAA_DebugMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYCAA_DebugMenu_EnableMaxCAA_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYCAA_DebugMenu, nullptr, "EnableMaxCAA", nullptr, nullptr, sizeof(YCAA_DebugMenu_eventEnableMaxCAA_Parms), Z_Construct_UFunction_UYCAA_DebugMenu_EnableMaxCAA_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYCAA_DebugMenu_EnableMaxCAA_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYCAA_DebugMenu_EnableMaxCAA_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYCAA_DebugMenu_EnableMaxCAA_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYCAA_DebugMenu_EnableMaxCAA()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYCAA_DebugMenu_EnableMaxCAA_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYCAA_DebugMenu_Initialize_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYCAA_DebugMenu_Initialize_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YCAA_DebugMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYCAA_DebugMenu_Initialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYCAA_DebugMenu, nullptr, "Initialize", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYCAA_DebugMenu_Initialize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYCAA_DebugMenu_Initialize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYCAA_DebugMenu_Initialize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYCAA_DebugMenu_Initialize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UYCAA_DebugMenu_NoRegister()
	{
		return UYCAA_DebugMenu::StaticClass();
	}
	struct Z_Construct_UClass_UYCAA_DebugMenu_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CreateAllSaveData_DebugDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_CreateAllSaveData_DebugDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CreateHeavyCharacter_DebugDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_CreateHeavyCharacter_DebugDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeleteAllSaveData_DebugDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_DeleteAllSaveData_DebugDelegate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UYCAA_DebugMenu_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UYCreate_DebugMenuBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UYCAA_DebugMenu_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UYCAA_DebugMenu_ConvertTexture2DToBuffer, "ConvertTexture2DToBuffer" }, // 2557353093
		{ &Z_Construct_UFunction_UYCAA_DebugMenu_EnableHeavyArena, "EnableHeavyArena" }, // 2807003791
		{ &Z_Construct_UFunction_UYCAA_DebugMenu_EnableMaxCAA, "EnableMaxCAA" }, // 217752195
		{ &Z_Construct_UFunction_UYCAA_DebugMenu_Initialize, "Initialize" }, // 1575078287
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UYCAA_DebugMenu_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "YCAA_DebugMenu.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/YCAA_DebugMenu.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UYCAA_DebugMenu_Statics::NewProp_CreateAllSaveData_DebugDelegate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YCAA_DebugMenu" },
		{ "ModuleRelativePath", "Public/YCAA_DebugMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UYCAA_DebugMenu_Statics::NewProp_CreateAllSaveData_DebugDelegate = { "CreateAllSaveData_DebugDelegate", nullptr, (EPropertyFlags)0x0020080010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UYCAA_DebugMenu, CreateAllSaveData_DebugDelegate), Z_Construct_UDelegateFunction_ABP_200508_CAA_DebugDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UYCAA_DebugMenu_Statics::NewProp_CreateAllSaveData_DebugDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UYCAA_DebugMenu_Statics::NewProp_CreateAllSaveData_DebugDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UYCAA_DebugMenu_Statics::NewProp_CreateHeavyCharacter_DebugDelegate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YCAA_DebugMenu" },
		{ "ModuleRelativePath", "Public/YCAA_DebugMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UYCAA_DebugMenu_Statics::NewProp_CreateHeavyCharacter_DebugDelegate = { "CreateHeavyCharacter_DebugDelegate", nullptr, (EPropertyFlags)0x0020080010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UYCAA_DebugMenu, CreateHeavyCharacter_DebugDelegate), Z_Construct_UDelegateFunction_ABP_200508_CAA_DebugDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UYCAA_DebugMenu_Statics::NewProp_CreateHeavyCharacter_DebugDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UYCAA_DebugMenu_Statics::NewProp_CreateHeavyCharacter_DebugDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UYCAA_DebugMenu_Statics::NewProp_DeleteAllSaveData_DebugDelegate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YCAA_DebugMenu" },
		{ "ModuleRelativePath", "Public/YCAA_DebugMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UYCAA_DebugMenu_Statics::NewProp_DeleteAllSaveData_DebugDelegate = { "DeleteAllSaveData_DebugDelegate", nullptr, (EPropertyFlags)0x0020080010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UYCAA_DebugMenu, DeleteAllSaveData_DebugDelegate), Z_Construct_UDelegateFunction_ABP_200508_CAA_DebugDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UYCAA_DebugMenu_Statics::NewProp_DeleteAllSaveData_DebugDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UYCAA_DebugMenu_Statics::NewProp_DeleteAllSaveData_DebugDelegate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UYCAA_DebugMenu_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYCAA_DebugMenu_Statics::NewProp_CreateAllSaveData_DebugDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYCAA_DebugMenu_Statics::NewProp_CreateHeavyCharacter_DebugDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYCAA_DebugMenu_Statics::NewProp_DeleteAllSaveData_DebugDelegate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UYCAA_DebugMenu_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UYCAA_DebugMenu>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UYCAA_DebugMenu_Statics::ClassParams = {
		&UYCAA_DebugMenu::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UYCAA_DebugMenu_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UYCAA_DebugMenu_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UYCAA_DebugMenu_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UYCAA_DebugMenu_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UYCAA_DebugMenu()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UYCAA_DebugMenu_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UYCAA_DebugMenu, 3614324872);
	template<> ABP_200508_API UClass* StaticClass<UYCAA_DebugMenu>()
	{
		return UYCAA_DebugMenu::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UYCAA_DebugMenu(Z_Construct_UClass_UYCAA_DebugMenu, &UYCAA_DebugMenu::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UYCAA_DebugMenu"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UYCAA_DebugMenu);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
